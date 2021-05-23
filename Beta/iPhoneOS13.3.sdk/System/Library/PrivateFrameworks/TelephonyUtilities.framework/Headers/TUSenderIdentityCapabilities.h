/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, NSUUID, TUCTCapabilityInfo, TUCallCapabilitiesXPCClient, TUSenderIdentityCapabilitiesState;

@interface TUSenderIdentityCapabilities : NSObject

{
    NSUUID *_senderIdentityUUID;
    NSString *_thumperCallingLocalDeviceID;
    TUSenderIdentityCapabilitiesState *_state;
    TUCallCapabilitiesXPCClient *_client;
}

@property (copy, nonatomic, readonly) TUSenderIdentityCapabilitiesState *state;
@property (nonatomic, readonly) TUCallCapabilitiesXPCClient *client;
@property (nonatomic, readonly) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (nonatomic, readonly) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (nonatomic, readonly) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (copy, nonatomic, readonly) NSUUID *senderIdentityUUID;
@property (nonatomic, readonly) _Bool supportsSimultaneousVoiceAndData;
@property (nonatomic, readonly) _Bool canAttemptTelephonyCallsWithoutCellularConnection;
@property (nonatomic, readonly) _Bool canAttemptEmergencyCallsWithoutCellularConnection;
@property (nonatomic, readonly, getter=isCSCallingCurrentlyAvailable) _Bool csCallingCurrentlyAvailable;
@property (nonatomic, readonly) _Bool supportsVoLTECalling;
@property (nonatomic, readonly, getter=isVoLTECallingEnabled) _Bool voLTECallingEnabled;
@property (nonatomic, readonly, getter=isVoLTECallingCurrentlyAvailable) _Bool voLTECallingCurrentlyAvailable;
@property (nonatomic, readonly) _Bool supportsWiFiCalling;
@property (nonatomic, readonly, getter=isWiFiCallingEnabled) _Bool wiFiCallingEnabled;
@property (nonatomic, readonly) _Bool supportsWiFiCallingRoaming;
@property (nonatomic, readonly, getter=isWiFiCallingRoamingEnabled) _Bool wiFiCallingRoamingEnabled;
@property (nonatomic, readonly, getter=isWiFiCallingCurrentlyAvailable) _Bool wiFiCallingCurrentlyAvailable;
@property (nonatomic, readonly) _Bool supportsEmergencyWiFiCalling;
@property (nonatomic, readonly, getter=isEmergencyWiFiCallingCurrentlyAvailable) _Bool emergencyWiFiCallingCurrentlyAvailable;
@property (nonatomic, readonly) int wiFiCallingProvisioningStatus;
@property (copy, nonatomic, readonly) NSURL *wiFiCallingProvisioningURL;
@property (nonatomic, readonly, getter=isWiFiCallingProvisioningURLInvalid) _Bool wiFiCallingProvisioningURLInvalid;
@property (copy, nonatomic, readonly) NSData *wiFiCallingProvisioningPostData;
@property (nonatomic, readonly) _Bool supportsThumperCalling;
@property (nonatomic, readonly, getter=isThumperCallingAllowedForCurrentDevice) _Bool thumperCallingAllowedForCurrentDevice;
@property (nonatomic, readonly, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
@property (nonatomic, readonly, getter=isThumperCallingCurrentlyAvailable) _Bool thumperCallingCurrentlyAvailable;
@property (nonatomic, readonly) _Bool supportsThumperCallingOverCellularData;
@property (copy, nonatomic) NSString *thumperCallingLocalDeviceID;
@property (nonatomic, readonly) int thumperCallingProvisioningStatus;
@property (copy, nonatomic, readonly) NSURL *thumperCallingProvisioningURL;
@property (nonatomic, readonly, getter=isThumperCallingProvisioningURLInvalid) _Bool thumperCallingProvisioningURLInvalid;
@property (copy, nonatomic, readonly) NSData *thumperCallingProvisioningPostData;
@property (nonatomic, readonly, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) _Bool thumperCallingAllowedOnDefaultPairedSecondaryDevice;

- (id)debugDescription;
- (_Bool)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
- (id)initWithSenderIdentityUUID:(id)arg1 state:(id)arg2 client:(id)arg3;
- (void)setVoLTECallingEnabled:(_Bool)arg1;
- (void)setWiFiCallingEnabled:(_Bool)arg1;
- (void)setWiFiCallingRoamingEnabled:(_Bool)arg1;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)setThumperCallingEnabled:(_Bool)arg1;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(_Bool)arg1;
- (void)requestPinFromPrimaryDeviceForThumperCalling;
- (void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
- (void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg1;

@end
