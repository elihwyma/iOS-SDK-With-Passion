/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIPreviewControlViewElement : SKUIViewElement

{
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_mediaURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *mediaURLString;

- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
