/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, PKPaymentWebServiceConfiguration, PKPaymentWebServiceRegion;

@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceContext

{
    struct os_unfair_lock_s _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _cacheLock;
    NSMutableDictionary *_featureSupportedLangaugeCache;
    _Bool _devSigned;
    _Bool _transactionServiceDisabled;
    _Bool _messageServiceDisabled;
    _Bool _ignoreProvisioningEnablementPercentage;
    long long _version;
    NSString *_deviceID;
    NSString *_secureElementID;
    NSString *_pushToken;
    NSString *_nextPushToken;
    NSString *_companionSerialNumber;
    NSDate *_registrationDate;
    NSDate *_configurationDate;
    PKPaymentWebServiceConfiguration *_configuration;
    NSString *_primaryRegionIdentifier;
    long long _consistencyCheckBackoffLevel;
    NSArray *_certificates;
    NSString *_lastUpdatedTag;
}

@property long long consistencyCheckBackoffLevel;
@property (copy) NSArray *certificates;
@property (copy) NSString *lastUpdatedTag;
@property long long version;
@property (copy) NSString *deviceID;
@property (copy) NSString *secureElementID;
@property (copy) NSString *pushToken;
@property (copy) NSString *nextPushToken;
@property (copy) NSString *companionSerialNumber;
@property _Bool devSigned;
@property (copy) NSDate *registrationDate;
@property (copy) NSDate *configurationDate;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property _Bool transactionServiceDisabled;
@property _Bool messageServiceDisabled;
@property _Bool ignoreProvisioningEnablementPercentage;
@property (retain) NSDictionary *regions;
@property (copy) NSString *primaryRegionIdentifier;
@property (weak, readonly) PKPaymentWebServiceRegion *primaryRegion;
@property (weak, readonly) NSDictionary *TSMURLStringByPushTopic;
@property (nonatomic, readonly) NSURL *peerPaymentServiceURL;
@property (nonatomic, readonly) _Bool hasPeerPaymentAccount;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithArchive:(id)arg1;
+ (void)_migrateContext:(id)arg1;
+ (void)_migrateFrom0To1:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1;
- (void)_localizationUpdated;
- (id)_regionWithPeerPaymentServiceURL;
- (id)regionForIdentifier:(id)arg1;
- (double)_contextProvisioningEnablementValue;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)TSMPushTopics;
- (_Bool)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;
- (_Bool)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1;

@end
