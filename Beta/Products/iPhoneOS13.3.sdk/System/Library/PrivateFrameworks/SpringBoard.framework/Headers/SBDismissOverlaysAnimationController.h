/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
    unsigned long long  _dismissOptions;
}

@property (nonatomic, readonly) unsigned long long dismissOptions;

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1;
+ (bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;

- (bool)_canBeInterrupted;
- (void)_startAnimation;
- (id)animationSettings;
- (unsigned long long)dismissOptions;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;

@end