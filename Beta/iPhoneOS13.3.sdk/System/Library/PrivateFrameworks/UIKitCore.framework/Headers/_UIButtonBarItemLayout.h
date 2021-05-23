/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSLayoutConstraint, UIBarButtonItem, UILayoutGuide, UIView, _UITAMICAdaptorView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout : _UIButtonBarLayout

{
    UIBarButtonItem *_item;
    UIView *_itemView;
    _UITAMICAdaptorView *_itemViewWrapper;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
    _Bool _useGroupSizing;
    _Bool _suppressSpacing;
    UILayoutGuide *_popoverLayoutGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property (nonatomic) _Bool useGroupSizing;
@property (nonatomic) _Bool suppressSpacing;
@property (copy, nonatomic) CDUnknownBlockType itemViewGenerator;
@property (nonatomic, readonly) UILayoutGuide *popoverLayoutGuide;

- (id)description;
- (id)_item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (_Bool)_shouldBeDirty;
- (void)_configure;
- (void)_addLayoutViews:(id)arg1;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (void)_updateCustomView;
- (void)_updateItemViewSizing;
- (void)_updateItemView;

@end
