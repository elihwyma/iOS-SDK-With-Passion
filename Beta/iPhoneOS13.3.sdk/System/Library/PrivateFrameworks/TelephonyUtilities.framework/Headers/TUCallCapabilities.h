/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUCallCapabilities : NSObject

+ (id)debugDescription;
+ (id)client;
+ (void)removeDelegate:(id)arg1;
+ (void)addDelegate:(id)arg1 queue:(id)arg2;
+ (_Bool)isFaceTimeAudioAvailable;
+ (_Bool)supportsFaceTimeAudioCalls;
+ (_Bool)supportsTelephonyCalls;
+ (_Bool)supportsSimultaneousVoiceAndData;
+ (_Bool)isWiFiCallingCurrentlyAvailable;
+ (_Bool)supportsPrimaryCalling;
+ (_Bool)isThumperCallingCurrentlyAvailable;
+ (_Bool)areRelayCallingFeaturesEnabled;
+ (_Bool)canAttemptTelephonyCallsWithoutCellularConnection;
+ (_Bool)supportsVoLTECalling;
+ (_Bool)isVoLTECallingEnabled;
+ (_Bool)supportsWiFiCalling;
+ (_Bool)isWiFiCallingEnabled;
+ (_Bool)isThumperCallingEnabled;
+ (_Bool)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
+ (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
+ (void)requestPinFromPrimaryDevice;
+ (void)cancelPinRequestFromPrimaryDevice;
+ (_Bool)supportsThumperCalling;
+ (_Bool)supportsThumperCallingOverCellularData;
+ (id)thumperCallingCapabilityInfo;
+ (id)wiFiCallingCapabilityInfo;
+ (_Bool)isVoLTECallingCurrentlyAvailable;
+ (_Bool)isThumperCallingAllowedForCurrentDevice;
+ (_Bool)canAttemptEmergencyCallsWithoutCellularConnection;
+ (_Bool)isCSCallingCurrentlyAvailable;
+ (id)voLTECallingCapabilityInfo;
+ (_Bool)isWiFiCallingRoamingEnabled;
+ (_Bool)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+ (void)setVoLTECallingEnabled:(_Bool)arg1;
+ (void)setWiFiCallingEnabled:(_Bool)arg1;
+ (void)setWiFiCallingRoamingEnabled:(_Bool)arg1;
+ (void)invalidateAndRefreshWiFiCallingProvisioningURL;
+ (void)setThumperCallingEnabled:(_Bool)arg1;
+ (void)invalidateAndRefreshThumperCallingProvisioningURL;
+ (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2;
+ (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(_Bool)arg1;
+ (_Bool)supportsDisplayingFaceTimeAudioCalls;
+ (int)telephonyCallSupport;
+ (int)faceTimeAudioCallSupport;
+ (int)faceTimeVideoCallSupport;
+ (id)senderIdentityCapabilities;
+ (id)senderIdentityCapabilitiesWithUUID:(id)arg1;
+ (_Bool)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)arg1;
+ (_Bool)supportsBasebandCalling;
+ (_Bool)supportsDisplayingTelephonyCalls;
+ (_Bool)isDirectTelephonyCallingCurrentlyAvailable;
+ (_Bool)supportsTelephonyRelayCalling;
+ (_Bool)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+ (_Bool)supportsFaceTimeAudioRelayCalling;
+ (_Bool)supportsDisplayingFaceTimeVideoCalls;
+ (_Bool)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+ (_Bool)supportsFaceTimeVideoRelayCalling;
+ (_Bool)isFaceTimeVideoAvailable;
+ (_Bool)areCTCapabilitiesValid;
+ (_Bool)accountsMatchForSecondaryCalling;
+ (_Bool)accountsSupportSecondaryCalling;
+ (id)cloudCallingDevices;
+ (_Bool)supportsRelayCalling;
+ (_Bool)isRelayCallingEnabled;
+ (void)setRelayCallingEnabled:(_Bool)arg1;
+ (_Bool)isRelayCallingEnabledForDeviceWithID:(id)arg1;
+ (void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;
+ (id)outgoingRelayCallerID;
+ (int)relayCallingAvailability;
+ (_Bool)isEmergencyCallbackModeEnabled;
+ (void)endEmergencyCallbackMode;
+ (_Bool)isEmergencyCallbackPossible;
+ (_Bool)supportsFaceTimeVideoCalls;
+ (id)_senderIdentityCapabilitiesByUUID;
+ (_Bool)supportsRelayingToOtherDevices;
+ (void)initializeCachedValues;
+ (_Bool)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)arg1;
+ (_Bool)supportsHostingTelephonyCalls;
+ (_Bool)supportsHostingFaceTimeAudioCalls;
+ (_Bool)supportsHostingFaceTimeVideoCalls;
+ (_Bool)supportsWiFiEmergencyCalling;
+ (void)_sendNotificationsAndCallbacksAfterRunningBlock:(CDUnknownBlockType)arg1;

@end
