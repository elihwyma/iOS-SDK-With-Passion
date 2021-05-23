/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIDonationConfiguration : NSObject

{
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSURL *_donationPurchaseURL;
    NSURL *_donationValidationURL;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSArray *allCharities;
@property (nonatomic, readonly) NSURL *donationPurchaseURL;
@property (nonatomic, readonly) NSURL *donationValidationURL;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (id)charityForIdentifier:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (id)logoImageForCharity:(id)arg1;

@end
