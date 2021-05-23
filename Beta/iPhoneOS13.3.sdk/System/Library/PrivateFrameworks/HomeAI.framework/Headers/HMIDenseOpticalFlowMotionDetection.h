/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HomeAI/HMIMotionDetection.h>

@interface HMIDenseOpticalFlowMotionDetection : HMIMotionDetection

{
    struct __CVBuffer *_pixelBufferUV;
    struct CGSize _size;
}

@property struct __CVBuffer *pixelBufferUV;
@property (readonly) struct CGSize size;

- (id)classMotionScoreMap;
- (id)classPaddingMap;
- (float)scoreForSubBoundingBox:(struct CGRect)arg1 forMetric:(long long)arg2;
- (id)initWithBoundingBox:(struct CGRect)arg1 size:(struct CGSize)arg2 pixelBufferUV:(struct __CVBuffer *)arg3;
- (_Bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;

@end
