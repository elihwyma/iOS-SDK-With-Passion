/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

@interface WBSFluidProgressController : NSObject

{
    id <WBSFluidProgressControllerDelegate> _delegate;
    id <WBSFluidProgressControllerWindowDelegate> _windowDelegate;
}

@property (weak) id <WBSFluidProgressControllerDelegate> delegate;
@property (weak) id <WBSFluidProgressControllerWindowDelegate> windowDelegate;

- (void)animationStepCompleted:(id)arg1;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(_Bool)arg2;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)frontmostTabDidChange;

@end
