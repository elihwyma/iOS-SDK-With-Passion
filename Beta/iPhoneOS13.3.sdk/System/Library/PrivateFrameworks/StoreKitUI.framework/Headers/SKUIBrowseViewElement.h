/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIBrowseViewElement : SKUIViewElement

{
    NSString *_title;
}

@property (nonatomic, readonly) NSString *title;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
