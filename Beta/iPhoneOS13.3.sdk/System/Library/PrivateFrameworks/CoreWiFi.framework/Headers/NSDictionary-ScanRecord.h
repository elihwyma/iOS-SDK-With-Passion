/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSDictionary.h>

@class CWFChannel, NSArray, NSData, NSString;

@interface NSDictionary (ScanRecord)

@property (nonatomic, readonly) unsigned long long cacheAge;
@property (copy, nonatomic, readonly) NSData *informationElementData;
@property (copy, nonatomic, readonly) NSData *SSID;
@property (copy, nonatomic, readonly) NSString *BSSID;
@property (copy, nonatomic, readonly) CWFChannel *channel;
@property (copy, nonatomic, readonly) NSDictionary *channelInfo;
@property (nonatomic, readonly) long long RSSI;
@property (nonatomic, readonly) long long noise;
@property (nonatomic, readonly) long long beaconInterval;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) long long airPortBaseStationModel;
@property (nonatomic, readonly) _Bool isUnconfiguredAirPortBaseStation;
@property (nonatomic, readonly) _Bool isPasspoint;
@property (nonatomic, readonly) _Bool isPersonalHotspot;
@property (nonatomic, readonly) _Bool isAppleSWAP;
@property (nonatomic, readonly) _Bool isIBSS;
@property (nonatomic, readonly) unsigned long long supportedSecurityTypes;
@property (nonatomic, readonly) long long WAPISubtype;
@property (nonatomic, readonly) int supportedPHYModes;
@property (nonatomic, readonly) _Bool hasRSNIE;
@property (nonatomic, readonly) _Bool isMFPCapable;
@property (nonatomic, readonly) _Bool isMFPRequired;
@property (nonatomic, readonly) _Bool hasInterworkingIE;
@property (nonatomic, readonly) int accessNetworkType;
@property (nonatomic, readonly) _Bool isInternetAccessible;
@property (nonatomic, readonly) _Bool isAdditionalStepRequiredForAccess;
@property (nonatomic, readonly) _Bool isEmergencyServicesReachable;
@property (nonatomic, readonly) _Bool isUnauthenticatedEmergencyServiceAccessible;
@property (nonatomic, readonly) long long venueGroup;
@property (nonatomic, readonly) long long venueType;
@property (copy, nonatomic, readonly) NSString *HESSID;
@property (nonatomic, readonly) _Bool hasAppleIE;
@property (nonatomic, readonly) _Bool isUnconfiguredDevice;
@property (nonatomic, readonly) _Bool providesInternetAccess;
@property (nonatomic, readonly) _Bool supportsWPS;
@property (nonatomic, readonly) _Bool supportsiAPOverWiFi;
@property (nonatomic, readonly) _Bool supports2GHzNetworks;
@property (nonatomic, readonly) _Bool supports5GHzNetworks;
@property (nonatomic, readonly) _Bool supportsCarPlay;
@property (nonatomic, readonly) _Bool supportsHomeKit;
@property (nonatomic, readonly) _Bool supportsHomeKit2;
@property (nonatomic, readonly) _Bool supportsAirPlay;
@property (nonatomic, readonly) _Bool supportsAirPlay2;
@property (nonatomic, readonly) _Bool supportsAirPrint;
@property (nonatomic, readonly) _Bool supportsMFi;
@property (nonatomic, readonly) _Bool supportsMFiHardwareAuth;
@property (nonatomic, readonly) _Bool supportsSoftwareTokenAuth;
@property (nonatomic, readonly) _Bool supportsSoftwareCertAuth;
@property (nonatomic, readonly) _Bool supportsSecureWAC;
@property (nonatomic, readonly) _Bool supportsWoW;
@property (copy, nonatomic, readonly) NSString *friendlyName;
@property (copy, nonatomic, readonly) NSString *manufacturerName;
@property (copy, nonatomic, readonly) NSString *modelName;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *primaryMAC;
@property (copy, nonatomic, readonly) NSString *bluetoothMAC;
@property (copy, nonatomic, readonly) NSString *deviceID;
@property (copy, nonatomic, readonly) NSDictionary *ANQPResponse;
@property (copy, nonatomic, readonly) NSArray *cellularNetworkInfo;
@property (copy, nonatomic, readonly) NSArray *NAIRealmNameList;
@property (copy, nonatomic, readonly) NSArray *roamingConsortiumList;
@property (copy, nonatomic, readonly) NSArray *operatorFriendlyNameList;
@property (copy, nonatomic, readonly) NSArray *domainNameList;

- (id)__WAPIPolicy;

@end
