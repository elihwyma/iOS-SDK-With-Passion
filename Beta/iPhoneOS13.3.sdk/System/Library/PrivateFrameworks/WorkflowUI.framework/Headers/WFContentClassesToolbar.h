/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView, WFModuleAppearance;

@protocol WFContentClassesToolbarDelegate;

@interface WFContentClassesToolbar : UICollectionReusableView

{
    _Bool _toolbarDisabled;
    _Bool _highlighted;
    WFModuleAppearance *_appearance;
    id <WFContentClassesToolbarDelegate> _delegate;
    NSArray *_contentClasses;
    double _horizontalInset;
    UIView *_contentView;
    UILabel *_typesLabel;
    UIImageView *_chevronImageView;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    NSLayoutConstraint *_chevronVisibleConstraint;
    NSLayoutConstraint *_chevronHiddenConstraint;
}

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UILabel *typesLabel;
@property (weak, nonatomic) UIImageView *chevronImageView;
@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewLeadingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewTrailingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *chevronVisibleConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *chevronHiddenConstraint;
@property (weak, nonatomic) id <WFContentClassesToolbarDelegate> delegate;
@property (copy, nonatomic) NSArray *contentClasses;
@property (nonatomic) _Bool toolbarDisabled;
@property (nonatomic) double horizontalInset;
@property (retain, nonatomic) WFModuleAppearance *appearance;

+ (double)preferredHeight;
+ (struct NSDirectionalEdgeInsets)contentViewInsets;
+ (id)headingFont;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)unhighlight;
- (void)highlight;
- (void)updateAppearance;
- (void)fadeOutHighlight;
- (void)updateTypesLabel;
- (void)typesLabelTapped;

@end
