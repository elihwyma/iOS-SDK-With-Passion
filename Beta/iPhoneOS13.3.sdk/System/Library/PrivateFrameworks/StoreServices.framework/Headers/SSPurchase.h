/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSDownloadPolicy, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties;

@protocol OS_dispatch_queue;

@interface SSPurchase : NSObject

{
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    _Bool _backgroundPurchase;
    long long _batchIdentifier;
    NSString *_buyParameters;
    NSNumber *_buyParamsCreatesDownloads;
    NSNumber *_buyParamsCreatesInstallJobs;
    NSNumber *_buyParamsCreatesJobs;
    _Bool _createsDownloads;
    _Bool _createsJobs;
    _Bool _createsInstallJobs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _displaysOnLockScreen;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    NSNumber *_enabledServiceType;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    _Bool _ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    NSNumber *_ownerAccountDSID;
    long long _placeholderDownloadIdentifier;
    _Bool _playbackRequest;
    _Bool _preauthenticated;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    _Bool _skipSoftwareAccountPreflight;
    NSDictionary *_tidHeaders;
    long long _uniqueIdentifier;
    _Bool _usesLocalRedownloadParametersIfPossible;
}

@property long long batchIdentifier;
@property (copy) NSNumber *enabledServiceType;
@property long long expectedDownloadFileSize;
@property (copy) NSArray *gratisIdentifiers;
@property (readonly, getter=isGratisSoftwareClaim) _Bool gratisSoftwareClaim;
@property long long placeholderDownloadIdentifier;
@property (getter=isPlaybackRequest) _Bool playbackRequest;
@property (copy) id requiredDeviceCapabilities;
@property (copy) NSDictionary *tidHeaders;
@property long long uniqueIdentifier;
@property _Bool usesLocalRedownloadParametersIfPossible;
@property (getter=isPreauthenticated) _Bool preauthenticated;
@property (readonly) NSData *databaseEncoding;
@property (retain) NSNumber *accountIdentifier;
@property (copy) NSString *affiliateIdentifier;
@property (copy) NSString *buyParameters;
@property (nonatomic) _Bool createsDownloads;
@property (copy) NSArray *filteredAssetTypes;
@property (getter=isBackgroundPurchase) _Bool backgroundPurchase;
@property (copy) SSURLRequestProperties *requestProperties;
@property (copy) NSDictionary *downloadProperties;
@property _Bool displaysOnLockScreen;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property _Bool ignoresForcedPasswordRestriction;
@property (copy) SSNetworkConstraints *networkConstraints;
@property (nonatomic) _Bool createsJobs;
@property (nonatomic) _Bool createsInstallJobs;
@property (retain) NSNumber *ownerAccountDSID;
@property (nonatomic) _Bool skipSoftwareAccountPreflight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)purchaseWithBuyParameters:(id)arg1;
+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
+ (id)newPurchaseWithXPCEncoding:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)initWithItem:(id)arg1;
- (id)valueForDownloadProperty:(id)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)_initSSPurchase;
- (id)_buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (_Bool)_createsDownloadsWithOverride;
- (_Bool)_createsJobsWithOverride;
- (_Bool)_createsInstallJobsWithOverride;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)buyParametersValueForKey:(id)arg1;
- (id)itemOffer;
- (void)setDefaultUserAgent:(id)arg1;
- (id)downloadMetadata;
- (void)setDownloadMetadata:(id)arg1;

@end
