/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIFacebookViewElement : SKUIViewElement

{
    long long _facebookType;
    NSString *_urlString;
}

@property (nonatomic, readonly) long long facebookType;
@property (nonatomic, readonly) NSString *URLString;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)pageComponentType;

@end
