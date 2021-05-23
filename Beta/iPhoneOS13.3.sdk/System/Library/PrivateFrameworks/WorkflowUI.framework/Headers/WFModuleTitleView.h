/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, WFAction, WFModuleTitleButton;

@protocol WFModuleTitleViewDelegate;

@interface WFModuleTitleView : UIView

{
    _Bool _hideSubtitle;
    id <WFModuleTitleViewDelegate> _delegate;
    WFAction *_action;
    unsigned long long _accessoryMode;
    unsigned long long _style;
    WFModuleTitleButton *_titleButton;
    UIButton *_handoffButton;
    UIButton *_installButton;
}

@property (weak, nonatomic, readonly) WFModuleTitleButton *titleButton;
@property (weak, nonatomic) UIButton *handoffButton;
@property (weak, nonatomic) UIButton *installButton;
@property (weak, nonatomic) id <WFModuleTitleViewDelegate> delegate;
@property (retain, nonatomic) WFAction *action;
@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool hideSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)viewHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (void)updateFont;
- (void)actionNameDidChange:(id)arg1;
- (double)imageViewWidth;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 applicationBundleIdentifer:(id)arg3;
- (void)installButtonPressed:(id)arg1;
- (void)handoffButtonPressed:(id)arg1;
- (_Bool)installAction;
- (_Bool)toggleFavorited;

@end
