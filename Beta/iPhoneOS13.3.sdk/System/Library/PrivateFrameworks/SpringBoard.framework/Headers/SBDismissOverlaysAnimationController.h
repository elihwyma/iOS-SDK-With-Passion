/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIAnimationController.h>

@interface SBDismissOverlaysAnimationController : SBUIAnimationController

{
    unsigned long long _dismissOptions;
}

@property (nonatomic, readonly) unsigned long long dismissOptions;

+ (_Bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;
+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1;

- (_Bool)_canBeInterrupted;
- (id)animationSettings;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;

@end
