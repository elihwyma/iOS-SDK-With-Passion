/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUICharityTemplateViewElement : SKUIViewElement

{
    NSString *_campaignIdentifier;
    NSString *_charityMetadataURLString;
}

@property (nonatomic, readonly) NSString *campaignIdentifier;
@property (nonatomic, readonly) NSString *charityMetadataURLString;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
