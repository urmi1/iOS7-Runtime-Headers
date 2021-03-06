/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKAttributedRoute;

@interface VKAttributedRouteMapMatcher : NSObject  {
    VKAttributedRoute *_attributedRoute;
}


- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (BOOL)_getClippedSegment:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1 maxDistance:(double)arg2 bounds:(const struct { double x1; double x2; double x3; double x4; }*)arg3 startCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 endCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 startPoint:(struct Vec2Imp<float> { float x1; float x2; }*)arg6 endPoint:(struct Vec2Imp<float> { float x1; float x2; }*)arg7 startOffset:(float*)arg8 endOffset:(float*)arg9 segmentLength:(double*)arg10;
- (BOOL)_bestMatchToPolylineSection:(const struct RouteMapMatchingSection { int (**x1)(); }*)arg1 from:(id)arg2 point:(const struct VKPoint { double x1; double x2; double x3; }*)arg3 useCLMatchedLocation:(BOOL)arg4 bounds:(const struct { double x1; double x2; double x3; double x4; }*)arg5 distanceLeftToSearch:(double*)arg6 trackedLocation:(id)arg7 bestMatchParams:(struct { double x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct VKPoint { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4; double x5; unsigned int x6; BOOL x7; struct { unsigned int x_8_1_1; double x_8_1_2; struct PolylineCoordinate { unsigned int x_3_2_1; float x_3_2_2; } x_8_1_3; struct { double x_4_2_1; double x_4_2_2; } x_8_1_4; } x8; }*)arg8;
- (id)findClosestCoordinateAlongSectionsFromDataSource:(id)arg1 forLocation:(id)arg2 useCLMatchedLocation:(BOOL)arg3 trackedLocation:(id)arg4 onDate:(id)arg5;
- (id)init:(id)arg1;

@end
