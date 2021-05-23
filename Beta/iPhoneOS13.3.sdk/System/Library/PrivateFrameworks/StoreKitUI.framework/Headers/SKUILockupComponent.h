/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIEditorialComponent, SKUIItem, SKUILockupViewElement;

@interface SKUILockupComponent : SKUIPageComponent

{
    SKUIEditorialComponent *_editorial;
    SKUIItem *_item;
    long long _itemIdentifier;
    struct SKUILockupStyle _lockupStyle;
}

@property (nonatomic, readonly) SKUILockupViewElement *viewElement;
@property (nonatomic, readonly) _Bool _needsItemData;
@property (nonatomic, readonly) SKUIEditorialComponent *editorial;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) struct SKUILockupStyle lockupStyle;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle)arg2;
- (void)_setItem:(id)arg1;
- (void)_setLockupStyle:(struct SKUILockupStyle)arg1;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle)arg2;

@end
