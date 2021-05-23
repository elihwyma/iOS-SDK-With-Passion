/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCPurchaseLookupResult, NSNumber;

@interface FCPurchaseMetadataFetcher : NSObject

{
    NSNumber *_bundleID;
    NSNumber *_externalVersionID;
    FCPurchaseLookupResult *_lookupResult;
}

@property (copy, nonatomic) NSNumber *bundleID;
@property (copy, nonatomic) NSNumber *externalVersionID;
@property (retain, nonatomic) FCPurchaseLookupResult *lookupResult;

- (id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(_Bool)arg2;
- (id)promisePurchaseLookupWithAppAdamID:(id)arg1;
- (id)promiseStoreExternalVersionWithLookupResult:(id)arg1;
- (id)promiseProductLookupWithLookupResult:(id)arg1 externalVersionID:(id)arg2 restorePurcase:(_Bool)arg3;
- (id)createAMSLookupWithProfile:(id)arg1;
- (id)checkIfOfferUsedAlreadyWithAppAdamID:(id)arg1;
- (id)promiseStoreExternalVersionWithAppAdamID:(id)arg1;
- (id)promiseBundleIDWithAppAdamID:(id)arg1;

@end
