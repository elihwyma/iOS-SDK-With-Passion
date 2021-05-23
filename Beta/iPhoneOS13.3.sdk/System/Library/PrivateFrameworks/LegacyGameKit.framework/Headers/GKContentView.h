/*
 Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UIButton, UIFont, UIImage, UIImageView, UILabel, UITableView;

@interface GKContentView : UIView

{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_iconView;
    UIButton *_cancelButton;
    UIButton *_otherButton;
    UITableView *_table;
    UIImageView *_tableWellView;
    NSArray *_connectionButtons;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _needsLayout;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *message;
@property (nonatomic) UIImage *icon;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *otherButton;
@property (retain, nonatomic, readonly) NSArray *connectionButtons;
@property (retain, nonatomic, readonly) UITableView *table;
@property (nonatomic) long long numberOfTitleLines;
@property (nonatomic) long long numberOfMessageLines;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) UIFont *messageFont;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;

+ (double)maxTextWidth;

- (void)dealloc;
- (void)layout;
- (void)layoutIfNeeded;
- (void)showActivityIndicator:(_Bool)arg1;
- (void)_createCancelButtonWithTitle:(id)arg1;
- (void)_createOtherButtonWithTitle:(id)arg1;
- (id)_createConnectionButtonWithType:(unsigned long long)arg1;
- (void)_createTitleLabelIfNeeded;
- (void)_createMessageLabelIfNeeded;
- (id)_createButton:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)setConnectionButtonTypes:(unsigned long long)arg1;

@end
