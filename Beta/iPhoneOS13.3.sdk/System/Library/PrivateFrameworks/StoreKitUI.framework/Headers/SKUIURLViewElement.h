/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKUIURLViewElement : SKUIViewElement

{
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *URL;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
