/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPBoundingBox : NSObject

{
    float _minX;
    float _maxX;
    float _minY;
    float _maxY;
    float _confidence;
    float _flag;
}

@property float minX;
@property float maxX;
@property float minY;
@property float maxY;
@property float confidence;
@property float flag;

- (float)area;
- (id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (id)intersect:(id)arg1;
- (id)union:(id)arg1;
- (id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (float)computeIntersectionOverUnion:(id)arg1;
- (struct CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2;

@end
