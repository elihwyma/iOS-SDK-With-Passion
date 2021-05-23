/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIInAppPurchase : NSObject <Swift>

{
    NSString *_formattedPrice;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithInAppPurchaseDictionary:(id)arg1;

@end
