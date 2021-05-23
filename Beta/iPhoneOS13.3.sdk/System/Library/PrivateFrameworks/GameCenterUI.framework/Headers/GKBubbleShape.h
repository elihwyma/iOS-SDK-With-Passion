/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKBubbleShape : NSObject

{
    struct GKVertexCurve *_vertexCurves;
    unsigned long long _vertexCount;
    double _vertexVariance;
    double _controlpointVariance;
    double _endpointVariance;
}

@property (nonatomic) struct GKVertexCurve *vertexCurves;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) double vertexVariance;
@property (nonatomic) double controlpointVariance;
@property (nonatomic) double endpointVariance;

+ (id)standardBubbleShape;
+ (id)standardBezierPathForSize:(struct CGSize)arg1;

- (void)dealloc;
- (id)pathForSize:(struct CGSize)arg1;
- (id)initWithVertexCount:(unsigned long long)arg1 vertexVariance:(double)arg2 endpointVariance:(double)arg3 controlpointVariance:(double)arg4;
- (void)generateVertexCurves;

@end
