/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUILockupViewElement;

__attribute__((visibility("hidden")))
@interface SKUIPreviewTemplateViewElement : SKUIViewElement

{
    long long _itemIdentifier;
    NSString *_previewURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) SKUILockupViewElement *previewLockup;
@property (nonatomic, readonly) NSString *previewURLString;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
