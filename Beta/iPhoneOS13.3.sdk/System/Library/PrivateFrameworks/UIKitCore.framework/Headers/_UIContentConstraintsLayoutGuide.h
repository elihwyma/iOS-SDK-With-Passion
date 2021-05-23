/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILayoutGuide.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIContentConstraintsLayoutGuide : UILayoutGuide

{
    _Bool _wantsMaximumSizeConstraintsActive;
    _Bool _wantsMinimumSizeConstraintsActive;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_maximumWidthConstraint;
    NSLayoutConstraint *_maximumHeightConstraint;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    struct CGSize _maximumSize;
    struct CGSize _minimumSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *trailingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *topConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, readonly) _Bool wantsMaximumSizeConstraintsActive;
@property (nonatomic, readonly) NSLayoutConstraint *maximumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *maximumHeightConstraint;
@property (nonatomic, readonly) _Bool wantsMinimumSizeConstraintsActive;
@property (nonatomic, readonly) NSLayoutConstraint *minimumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic) struct CGSize minimumSize;

- (id)init;
- (void)_clearConstraints;
- (void)setOwningView:(id)arg1;
- (void)_updateAllMarginConstraintConstants;
- (void)_setAllMarginConstraintsActive:(_Bool)arg1;
- (void)_updateAllSizeConstraints;
- (void)_setAllSizeConstraintsActive:(_Bool)arg1;
- (id)_allMarginConstraints;
- (id)_allSizeConstraints;

@end
