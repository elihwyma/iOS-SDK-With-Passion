/*
 Image: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
 */

#import <UIKit/UIView.h>

@class INKContent, NSArray, NSBundle, NSLayoutConstraint, NSString, UITraitCollection;

@protocol INKContentViewDelegate;

@interface INKContentView : UIView

{
    _Bool _windowShownDelayInProgress;
    _Bool _isPartOfWindow;
    UITraitCollection *__preferredTraitCollection;
    long long __cacheHorizontalSizeClass;
    NSString *__cacheContentSizeCategory;
    NSBundle *__frameworkBundle;
    UIView *__contentView;
    UIView *__bottomSeparatorView;
    NSLayoutConstraint *__bottomSeparatorHeightConstraint;
    NSLayoutConstraint *__contentViewBottomConstraint;
    NSArray *_compactSizeClassHorizontalConstraints;
    NSArray *_regularSizeClassHorizontalConstraints;
    _Bool _displaysBottomSeparator;
    _Bool __accessbilitySizeCategory;
    INKContent *_content;
    id <INKContentViewDelegate> __delegate;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, getter=_isAccessbilitySizeCategory) _Bool _accessbilitySizeCategory;
@property (weak, nonatomic) id <INKContentViewDelegate> _delegate;
@property (copy, nonatomic) UIView *_contentView;
@property (copy, nonatomic) NSBundle *_frameworkBundle;
@property (copy, nonatomic) INKContent *content;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) _Bool displaysBottomSeparator;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_preferredTraitCollection;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (id)_currentContentSizeCategory;
- (void)cancelContentDisplayDelay;
- (void)updateHorizontalContraints;
- (_Bool)_isHorizontalSizeClassChanged:(id)arg1;
- (_Bool)_isAccessibilitySizeCategoryChanged;
- (void)_accessibilitySizeCategoryDidChange;
- (_Bool)_isContentSizeAccessibilityCategory;
- (void)contentDisplayDelay;
- (id)_initWithContent:(id)arg1;
- (void)_setPreferredTraitCollection:(id)arg1;
- (_Bool)_isContentSizeCategoryChanged;

@end
