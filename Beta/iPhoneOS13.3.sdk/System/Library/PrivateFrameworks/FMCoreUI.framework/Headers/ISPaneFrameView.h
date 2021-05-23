/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIView.h>

@class FMSlidingPaneViewController;

__attribute__((visibility("hidden")))
@interface ISPaneFrameView : UIView

{
    FMSlidingPaneViewController *_owningViewController;
}

@property (weak, nonatomic) FMSlidingPaneViewController *owningViewController;

- (void)layoutSubviews;

@end
