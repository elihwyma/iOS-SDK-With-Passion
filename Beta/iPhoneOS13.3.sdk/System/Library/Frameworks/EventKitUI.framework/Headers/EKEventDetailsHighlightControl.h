/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIImageView, UILabel;

@interface EKEventDetailsHighlightControl : UIControl

{
    NSArray *_titleAndSubtitleVisibleContraints;
    NSArray *_justTitleVisibleContraints;
    NSArray *_justSubtitleVisibleContraints;
    NSArray *_justTitleAndActionVisibleContraints;
    NSString *_actionText;
    NSString *_subtitleText;
    UIColor *_actionColor;
    UIImageView *_iconStack;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_actionLabel;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelPaddingConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
}

@property (retain, nonatomic, readonly) NSLayoutConstraint *topMarginConstraint;
@property (retain, nonatomic, readonly) NSLayoutConstraint *interLabelPaddingConstraint;
@property (retain, nonatomic, readonly) NSLayoutConstraint *bottomMarginConstraint;
@property (nonatomic, readonly) UIImageView *iconStack;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *actionLabel;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)titleFont;
+ (id)subtitleFont;
+ (id)subtitleColor;
+ (double)topMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)bottomMarginConstant;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitleText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setActionText:(id)arg1 color:(id)arg2;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateTitleAndSubtitleConstraints;
- (void)_updateSubtitleAndActionText;
- (void)setSubtitleAttributedText:(id)arg1;

@end
