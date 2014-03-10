// =============================================================================
//
// Copyright (c) 2014 Christopher Baker <http://christopherbaker.net>
// Copyright (c) -2014 Tom Carden <https://github.com/RandomEtc>
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


//// via http://jeffreysambells.com/2010/05/27/decoding-polylines-from-google-maps-direction-api-with-java
//private List<Location> decodePoly(String encoded)
//{
//    List<Location> poly = new ArrayList<Location>();
//    int index = 0, len = encoded.length();
//    int lat = 0, lng = 0;
//
//    while (index < len) {
//        int b, shift = 0, result = 0;
//        do {
//            b = encoded.charAt(index++) - 63;
//            result |= (b & 0x1f) << shift;
//            shift += 5;
//        }
//        while (b >= 0x20);
//        int dlat = ((result & 1) != 0 ? ~(result >> 1) : (result >> 1));
//        lat += dlat;
//
//        shift = 0;
//        result = 0;
//        do {
//            b = encoded.charAt(index++) - 63;
//            result |= (b & 0x1f) << shift;
//            shift += 5;
//        }
//        while (b >= 0x20);
//        int dlng = ((result & 1) != 0 ? ~(result >> 1) : (result >> 1));
//        lng += dlng;
//
//        //      Location p = new Location((int) (((double) lat / 1E5) * 1E6), (int) (((double) lng / 1E5) * 1E6));
//        Location p = new Location(lat / 1E6, lng / 1E6);
//        poly.add(p);
//    }
//    
//    return poly;
//}
