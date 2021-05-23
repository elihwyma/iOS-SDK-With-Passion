/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSLayoutDimension, NSMapTable, NSMutableArray, NSString, UIBarButtonItem, UIView, _UIBarButtonItemData, _UIButtonBarButtonVisualProvider, _UIButtonBarLayoutMetrics, _UIButtonBarStackView;

@protocol _UIButtonBarAppearanceDelegate, _UIButtonBarDelegate;

@interface _UIButtonBar : NSObject <Swift>

{
    _UIButtonBarStackView *_stackView;
    NSLayoutDimension *_flexibleSpaceEqualSizeAnchor;
    NSLayoutDimension *_minimumInterItemSpaceAnchor;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    NSLayoutDimension *_minimumInterGroupSpaceAnchor;
    NSLayoutConstraint *_minimumInterGroupSpaceConstraint;
    UIView *_centeredView;
    NSLayoutConstraint *_centeringConstraint;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_groupLayouts;
    NSMutableArray *_effectiveLayout;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_layoutViews;
    NSMutableArray *_layoutGuides;
    NSMutableArray *_layoutActiveConstraints;
    NSMapTable *_senderActionMap;
    struct {
        unsigned int isInLayoutReentrancyGuard:1;
        unsigned int needsAppearanceUpdate:1;
        unsigned int plainAppearanceChanged:1;
        unsigned int doneAppearanceChanged:1;
    } _buttonBarFlags;
    _Bool _itemsInGroupUseSameSize;
    _Bool _compact;
    NSArray *_barButtonGroups;
    double _minimumInterItemSpace;
    id <_UIButtonBarDelegate> _delegate;
    double _minimumInterGroupSpace;
    CDUnknownBlockType _defaultActionFilter;
    id <_UIButtonBarAppearanceDelegate> __appearanceDelegate;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property (nonatomic, getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:) _Bool itemsInGroupUseSameSize;
@property (nonatomic, getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:) double minimumInterGroupSpace;
@property (copy, nonatomic) CDUnknownBlockType defaultActionFilter;
@property (nonatomic, readonly) UIBarButtonItem *ultimateFallbackItem;
@property (weak, nonatomic) id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
@property (retain, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (retain, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (nonatomic, readonly, getter=_layoutWidth) double layoutWidth;
@property (nonatomic, getter=_compact, setter=_setCompact:) _Bool compact;
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (nonatomic, readonly) UIView *view;
@property (copy, nonatomic) NSArray *barButtonGroups;
@property (nonatomic) double minimumInterItemSpace;
@property (weak, nonatomic) id <_UIButtonBarDelegate> delegate;
@property (nonatomic) _Bool createsPopoverLayoutGuides;
@property (nonatomic) _Bool allowsViewWrappers;
@property (nonatomic) long long itemDistribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (float)optionalConstraintsPriority;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setNeedsVisualUpdate;
- (void)_setNeedsVisualUpdateAndNotify:(_Bool)arg1;
- (double)_estimatedWidth;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (id)_newGroupLayout:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_validateAllItems;
- (void)plainItemAppearanceChanged;
- (void)doneItemAppearanceChanged;
- (id)_layoutForGroup:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_updateToFitInWidth:(double)arg1;
- (void)_setVisualProvider:(id)arg1;
- (void)_layoutBar;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_reloadBarButtonGroups;
- (void)_appearanceChanged;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;

@end
