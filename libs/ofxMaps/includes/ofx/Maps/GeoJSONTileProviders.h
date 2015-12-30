// =============================================================================
//
// Copyright (c) 2015 Jonas Fehr <http://www.jonasfehr.ch>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


#pragma once


#include "BaseURLTileProvider.h" //  "ofx/Maps/BaseURLTileProvider.h"


namespace ofx {
    namespace Maps {
        
        
        class GeoJSONTileProvider: public BaseURLTileProvider
        {
        public:
            GeoJSONTileProvider(const std::string& URITemplate,
                            const std::string& attribution);
            
            GeoJSONTileProvider(const std::string& URITemplate,
                            const std::string& attribution,
                            const std::vector<std::string>& subdomains,
                            int minZoom,
                            int maxZoom,
                            int tileWidth,
                            int tileHeight,
                            const BaseProjection& projection);
            
            virtual ~GeoJSONTileProvider();
            
            static const std::string DEFAULT_OSM_URI_TEMPLATE;
            static const std::string DEFAULT_OSM_ATTRIBUTION;
            
        };
        
        
        class BaseStamenTileProvider: public OSMTileProvider
        {
        public:
            BaseStamenTileProvider(const std::string& URITemplate,
                                   const std::string& attribution = "Map tiles by <a href=\"http://stamen.com\">Stamen Design</a>, under <a href=\"http://creativecommons.org/licenses/by/3.0\">CC BY 3.0</a>. Data by <a href=\"http://openstreetmap.org\">OpenStreetMap</a>, under <a href=\"http://www.openstreetmap.org/copyright\">ODbL</a>."):
            OSMTileProvider(URITemplate, attribution)
            {
            }
            
            
            virtual ~BaseStamenTileProvider()
            {
            }
            
        };
        
} } // namespace ofx::Maps