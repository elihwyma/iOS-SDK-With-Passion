/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUILockupViewElement : SKUIViewElement

{
    BOOL _enabled;
    long long _lockupViewType;
    _Bool _selectable;
}

@property (nonatomic, readonly) _Bool containsElementGroups;
@property (nonatomic, readonly) SKUIFullscreenImageViewElement *fullscreenImage;
@property (nonatomic, readonly) long long lockupViewType;
@property (nonatomic, readonly, getter=isSelectable) _Bool selectable;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;

@end
