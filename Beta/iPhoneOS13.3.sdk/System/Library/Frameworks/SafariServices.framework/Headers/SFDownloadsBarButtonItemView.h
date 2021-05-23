/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class CAStateController, UIBarButtonItem, UIButton, UIProgressView;

__attribute__((visibility("hidden")))
@interface SFDownloadsBarButtonItemView : UIView

{
    UIButton *_innerButton;
    UIProgressView *_progressView;
    UIBarButtonItem *_item;
    double _progress;
    CDStruct_4e0a34f2 deferrableUpdateViewState;
    CAStateController *_stateController;
}

- (void)setEnabled:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (id)initWithBarButtonItem:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)pulse;
- (void)_buttonPressed;
- (void)updateContents;
- (CDStruct_4e0a34f2 *)deferrableUpdateViewState;

@end
