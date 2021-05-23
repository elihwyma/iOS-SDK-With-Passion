/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchOperation.h>

@class FCPurchaseLookupRecordSource, NSArray;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

{
    NSArray *_purchaseIDs;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
}

@property (retain, nonatomic) NSArray *purchaseIDs;
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;

- (id)init;
- (void)performOperation;
- (id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2;
- (id)_prefixedPurchasedIDs:(id)arg1;
- (id)processFetchedResults:(id)arg1;

@end
