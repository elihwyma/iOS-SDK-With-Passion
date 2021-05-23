/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKPolylinePath.h>

__attribute__((visibility("hidden")))
@interface VKTransitPolylinePath : VKPolylinePath

{
    unsigned long long _lineID;
    double _vertexEqualityTolerance;
}

@property (nonatomic, readonly) double vertexEqualityTolerance;

- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(_Bool)arg5 transform:(CDStruct_5ae1f918 *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tileZ:(unsigned int)arg10 vertexPrecision:(unsigned char)arg11;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(_Bool)arg5 transform:(CDStruct_5ae1f918 *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9;

@end
