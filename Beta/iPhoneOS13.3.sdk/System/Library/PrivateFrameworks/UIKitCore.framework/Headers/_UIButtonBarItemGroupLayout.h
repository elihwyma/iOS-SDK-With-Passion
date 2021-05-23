/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSMapTable, NSMutableArray, UIBarButtonItemGroup, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout

{
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
    _Bool _compact;
    _Bool _useGroupSizing;
    _Bool _suppressSpacing;
    UIBarButtonItemGroup *_group;
    UILayoutGuide *_groupSizeGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property (nonatomic, readonly) UIBarButtonItemGroup *group;
@property (nonatomic, readonly) UILayoutGuide *groupSizeGuide;
@property (nonatomic) _Bool compact;
@property (nonatomic) _Bool useGroupSizing;
@property (nonatomic) _Bool suppressSpacing;
@property (copy, nonatomic) CDUnknownBlockType itemViewGenerator;

- (id)description;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2;
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;
- (id)layoutForBarButtonItem:(id)arg1;
- (id)layoutsForSpacerItem:(id)arg1;
- (id)_effectiveLayout;
- (void)_configure;
- (void)_addLayoutViews:(id)arg1;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;
- (_Bool)_isSpace;
- (_Bool)_isGroup;
- (id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(_Bool)arg2;
- (void)_iterateConfiguredLayouts:(CDUnknownBlockType)arg1;
- (id)_itemLayouts;
- (id)_representativeLayout;

@end
