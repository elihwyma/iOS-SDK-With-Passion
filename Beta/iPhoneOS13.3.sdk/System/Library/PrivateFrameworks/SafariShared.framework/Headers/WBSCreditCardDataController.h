/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, PKVirtualCardManager;

@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject

{
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKVirtualCardManager *_virtualCardManager;
}

@property (nonatomic, readonly) NSArray *creditCardData;

+ (_Bool)hasCreditCardData;

- (id)init;
- (void)savePendingChangesBeforeTermination;
- (_Bool)authenticationRequiredForVirtualCard:(id)arg1;
- (void)getVirtualCardsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCreditCardDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)arg1;
- (void)getCreditCardDataToFill:(id)arg1 externalizedContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sortCreditCardDataArray:(id)arg1;
- (id)_creditCardData;
- (_Bool)_shouldOfferVirtualCards;
- (unsigned long long)virtualCardFieldsToRequest;
- (id)_virtualCardDataFromPKVirtualCards:(id)arg1;
- (id)_deduplicatedVirtualCardDataArray:(id)arg1 andCreditCardDataArray:(id)arg2;
- (_Bool)hasUsedNonVirtualCard;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1;
- (_Bool)shouldNeverSaveCardWithNumber:(id)arg1;
- (id)existingCardWithNumber:(id)arg1;
- (id)_uniqueCardNameForCardName:(id)arg1;
- (id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2;
- (void)creditCardDataDidChange;
- (void)replaceCreditCardData:(id)arg1 withCard:(id)arg2;
- (void)setHasUsedNonVirtualCard;
- (void)_removeNeverSaveCreditCardData:(id)arg1;
- (_Bool)shouldAddCardWithNumber:(id)arg1;
- (void)saveCreditCardData:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCard:(id)arg1;
- (void)invalidateCreditCardData;
- (id)urlForVirtualCard:(id)arg1;
- (void)getVirtualCardCredentialsFromKeychainWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)savableCreditCardDataInForm:(id)arg1;
- (void)removeCreditCardData:(id)arg1;
- (void)saveCreditCardDataIfAllowed:(id)arg1;
- (_Bool)isCreditCardDataSaved:(id)arg1;
- (void)neverSaveCreditCardData:(id)arg1;
- (void)clearCreditCardData;
- (id)_testVirtualCard;
- (void)isVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
