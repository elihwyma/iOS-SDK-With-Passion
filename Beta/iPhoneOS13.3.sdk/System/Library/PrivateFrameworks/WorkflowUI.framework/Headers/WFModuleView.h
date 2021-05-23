/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSProgress, NSString, UIColor, WFAction;

@interface WFModuleView : UIView

{
    _Bool _showing;
    WFAction *_action;
    UIColor *_progressBackgroundColor;
    NSProgress *_progress;
    UIView *_progressView;
}

@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) UIView *progressView;
@property (weak, nonatomic) WFAction *action;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)layoutSubviews;
- (void)actionRunningStateDidChange:(id)arg1;

@end
