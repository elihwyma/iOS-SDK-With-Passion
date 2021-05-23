/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSButton.h>

@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton

{
    CPSNavigationAlertProgressView *_altFocusProgressView;
}

@property (weak, nonatomic) CPSNavigationAlertProgressView *altFocusProgressView;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;

@end
