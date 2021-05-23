/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIWriteAReviewTemplateViewElement : SKUIViewElement

{
    long long _itemIdentifier;
    NSString *_reviewMetadataURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *reviewMetadataURLString;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
