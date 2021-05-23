/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

__attribute__((visibility("hidden")))
@interface PDTimeNodeUnion : NSObject

{
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (id)init;
- (id)description;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)audio;
- (void)setAudio:(id)arg1;
- (void)setSequential:(id)arg1;
- (void)setScaleBehavior:(id)arg1;
- (id)scaleBehavior;
- (id)timeBehavior;
- (id)colorBehavior;
- (id)effectBehavior;
- (id)motionBehavior;
- (id)rotateBehavior;
- (id)cmdBehavior;
- (void)setParallel:(id)arg1;
- (void)setTimeBehavior:(id)arg1;
- (void)setColorBehavior:(id)arg1;
- (void)setEffectBehavior:(id)arg1;
- (void)setMotionBehavior:(id)arg1;
- (void)setRotateBehavior:(id)arg1;
- (void)setCmdBehavior:(id)arg1;
- (id)commonBehavior;
- (id)parallel;
- (id)sequential;

@end
