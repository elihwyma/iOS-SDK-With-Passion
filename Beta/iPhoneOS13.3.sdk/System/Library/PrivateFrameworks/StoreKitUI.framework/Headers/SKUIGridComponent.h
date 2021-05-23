/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSMutableArray;

@interface SKUIGridComponent : SKUIPageComponent

{
    NSMutableArray *_children;
    struct SKUIEditorialStyle _editorialStyle;
    long long _gridType;
    struct SKUILockupStyle _lockupStyle;
    long long _missingItemCount;
    _Bool _showsIndexNumbers;
}

@property (nonatomic, readonly) long long gridType;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) struct SKUIEditorialStyle editorialStyle;
@property (nonatomic, readonly) struct SKUILockupStyle lockupStyle;
@property (nonatomic, readonly) _Bool showsIndexNumbers;

- (id)description;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isMissingItemData;
- (id)metricsElementName;
- (id)initWithBrickItems:(id)arg1;
- (id)initWithRoomContext:(id)arg1 gridType:(long long)arg2;
- (void)_reloadMissingItemCount;
- (void)_setChildrenWithFeaturedContextContext:(id)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (id)initWithGridItems:(id)arg1;
- (id)initWithLockups:(id)arg1;
- (id)_updateWithInvalidItemIdentifiers:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;

@end
