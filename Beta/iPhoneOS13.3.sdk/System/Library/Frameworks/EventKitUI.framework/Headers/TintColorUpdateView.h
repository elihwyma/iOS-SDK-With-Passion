/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@protocol EKUITintColorUpdateDelegate;

@interface TintColorUpdateView : UIView

{
    UIView<EKUITintColorUpdateDelegate> *_tintColorUpdateDelegate;
}

@property (nonatomic) UIView<EKUITintColorUpdateDelegate> *tintColorUpdateDelegate;

- (void)tintColorDidChange;

@end
