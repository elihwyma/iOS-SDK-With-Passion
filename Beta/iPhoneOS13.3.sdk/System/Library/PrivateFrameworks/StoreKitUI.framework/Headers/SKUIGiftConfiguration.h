/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString, NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfiguration : NSObject

{
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSString *_currencySymbol;
    long long _currencySymbolPosition;
    NSArray *_fixedGiftAmountLabels;
    NSArray *_fixedGiftAmountValues;
    NSString *_senderName;
    struct _NSRange _giftAmountRange;
    NSURL *_giftPurchaseURL;
    NSURL *_giftValidationURL;
    long long _maximumMessageLength;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
    NSString *_senderEmailAddress;
    NSString *_storeFrontName;
    NSArray *_themes;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSString *currencySymbol;
@property (nonatomic, readonly) long long currencySymbolPosition;
@property (nonatomic, readonly) NSArray *fixedGiftAmountLabels;
@property (nonatomic, readonly) NSArray *fixedGiftAmountValues;
@property (nonatomic, readonly) struct _NSRange giftAmountRange;
@property (nonatomic, readonly) NSURL *giftPurchaseURL;
@property (nonatomic, readonly) NSURL *giftValidationURL;
@property (nonatomic, readonly) long long maximumMessageLength;
@property (nonatomic, readonly) NSString *senderEmailAddress;
@property (nonatomic, readonly) NSString *senderName;
@property (nonatomic, readonly) NSString *storeFrontName;
@property (nonatomic, readonly) NSArray *themes;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)_loadThemeImages;
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;
- (id)charityForIdentifier:(id)arg1;
- (_Bool)loadCachedConfiguration;
- (void)loadLogoForCharity:(id)arg1;
- (id)logoImageForCharity:(id)arg1;

@end
