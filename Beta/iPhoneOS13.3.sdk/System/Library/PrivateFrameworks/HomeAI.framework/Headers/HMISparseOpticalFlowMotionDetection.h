/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection

{
    NSArray *_motionVectors;
    struct CGSize _size;
}

@property (readonly) NSArray *motionVectors;
@property (readonly) struct CGSize size;

- (id)classMotionScoreMap;
- (id)classPaddingMap;
- (_Bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (float)scoreForSubBoundingBox:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (id)initWithBoundingBox:(struct CGRect)arg1 size:(struct CGSize)arg2 motionVectors:(id)arg3;

@end
