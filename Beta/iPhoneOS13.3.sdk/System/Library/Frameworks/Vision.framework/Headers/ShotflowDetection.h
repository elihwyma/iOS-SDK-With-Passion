/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetection : NSObject

{
    float _area;
    _Bool _hasLabel;
    float _confidence;
    int _mergesCount;
    int _scale;
    float _rotationAngle;
    float _yawAngle;
    int _label;
    struct CGRect _box;
    struct CGRect _defaultBox;
}

@property (nonatomic) struct CGRect box;
@property (nonatomic) struct CGRect defaultBox;
@property (nonatomic) float confidence;
@property (nonatomic) int scale;
@property (nonatomic) int mergesCount;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) _Bool hasLabel;
@property (nonatomic) int label;
@property (nonatomic, readonly) struct CGPoint boxCenter;
@property (nonatomic, readonly) float distanceToDefaultBox;
@property (nonatomic, readonly) float smartDistance;

- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasLabel:(_Bool)arg7 label:(int)arg8;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;
- (float)overlap:(id)arg1;
- (float)intersectionOverArea:(id)arg1;
- (_Bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (_Bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;

@end
