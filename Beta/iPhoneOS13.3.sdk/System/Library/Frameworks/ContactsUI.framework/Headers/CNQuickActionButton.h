/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNQuickAction, NSArray, UIButton, UILabel;

@protocol CNQuickActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickActionButton : UIView

{
    _Bool _showTitle;
    _Bool _showBackgroundPlatter;
    CNQuickAction *_action;
    id <CNQuickActionButtonDelegate> _delegate;
    UIButton *_button;
    UILabel *_label;
    NSArray *_activatedConstraints;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNQuickAction *action;
@property (nonatomic) _Bool showTitle;
@property (nonatomic) _Bool showBackgroundPlatter;
@property (weak, nonatomic) id <CNQuickActionButtonDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)performAction;
- (void)onLongPress:(id)arg1;

@end
