/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class ACAccount, NSString, NSURL, NSUUID;

@interface ADCoreSettings : ADSingleton

{
    _Bool _educationModeEnabled;
    _Bool _internationalRoaming;
    _Bool _hasDeterminedRoamingStatus;
    int _connectionType;
    float _timezone;
    int _runState;
    NSURL *_defaultServerURL;
    NSURL *_defaultConfigurationServerURL;
    double _jingleTimeoutInterval;
    double _adServerTimeoutInterval;
    double _NSURLConnectionTimeout;
    double _NSURLTransactionTimeout;
    NSString *_osVersionAndBuild;
    NSString *_deviceModel;
    NSString *_bundleIdentifier;
    NSString *_storefrontLocalizationLanguage;
    NSString *_homeCarrierMCC;
    NSString *_homeCarrierMNC;
    NSString *_currentCarrierMCC;
    NSString *_currentCarrierMNC;
    NSString *_iTunesStorefront;
}

@property (nonatomic, readonly) NSUUID *IDFA;
@property (retain, nonatomic) NSURL *defaultServerURL;
@property (retain, nonatomic) NSURL *defaultConfigurationServerURL;
@property (nonatomic) int segmentRetrievalInterval;
@property (nonatomic) int maxSegmentSendInterval;
@property (nonatomic) double jingleTimeoutInterval;
@property (nonatomic) double adServerTimeoutInterval;
@property (nonatomic) double NSURLConnectionTimeout;
@property (nonatomic) double NSURLTransactionTimeout;
@property (retain, nonatomic) NSString *osVersionAndBuild;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int connectionType;
@property (nonatomic) float timezone;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *storefrontLocalizationLanguage;
@property (nonatomic, readonly) _Bool isManagedAppleID;
@property (nonatomic, readonly) _Bool isManagediTunesAccount;
@property (nonatomic, readonly) _Bool isManagediCloudAccount;
@property (nonatomic, readonly) _Bool deviceLimitsAdTracking;
@property (nonatomic, readonly) _Bool limitAdTrackingRestrictionEnabledBySpringboard;
@property (nonatomic) _Bool isLATEnabled;
@property (nonatomic, readonly) _Bool educationModeEnabled;
@property (copy, nonatomic) NSString *homeCarrierMCC;
@property (copy, nonatomic) NSString *homeCarrierMNC;
@property (copy, nonatomic) NSString *currentCarrierMCC;
@property (copy, nonatomic) NSString *currentCarrierMNC;
@property (nonatomic) _Bool internationalRoaming;
@property (nonatomic) _Bool hasDeterminedRoamingStatus;
@property (nonatomic) int runState;
@property (retain, nonatomic) NSString *iTunesStorefront;
@property (nonatomic, readonly) ACAccount *iTunesStoreAccount;
@property (nonatomic, readonly) NSString *iTunesAccountDSID;
@property (nonatomic, readonly) NSString *customJinglePayload;
@property (nonatomic, readonly) ACAccount *iCloudAccount;
@property (nonatomic, readonly) NSString *iCloudAccountIdentifier;
@property (nonatomic, readonly) NSString *iCloudDSID;
@property (readonly) _Bool unitTesting;

+ (id)sharedInstance;
+ (_Bool)educationModeEnabled;

- (id)init;
- (void)clearAdvertisingIdentifier;
- (void)expire;
- (id)deviceDescription;
- (_Bool)purpleBuddyWillRun;
- (_Bool)deviceUnlockedOnce;
- (void)reloadStorefront:(CDUnknownBlockType)arg1;
- (int)deviceRunStateForBundleIdentifier:(id)arg1;
- (_Bool)isLATRestrictedByProfile;
- (void)gatherTelephonyData;

@end
