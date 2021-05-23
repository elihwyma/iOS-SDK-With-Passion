/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <Swift>

{
    _Bool _supportsPrimaryCalling;
    _Bool _supportsBasebandCalling;
    _Bool _supportsCellularData;
    _Bool _supportsDisplayingTelephonyCalls;
    _Bool _supportsDisplayingFaceTimeAudioCalls;
    _Bool _supportsDisplayingFaceTimeVideoCalls;
    _Bool _faceTimeAudioAvailable;
    _Bool _faceTimeVideoAvailable;
    _Bool _ctCapabilitiesValid;
    _Bool _accountsMatchForSecondaryCalling;
    _Bool _accountsSupportSecondaryCalling;
    _Bool _supportsRelayCalling;
    _Bool _relayCallingEnabled;
    _Bool _relayCallingFeaturesEnabled;
    _Bool _supportsTelephonyRelayCalling;
    _Bool _supportsFaceTimeAudioRelayCalling;
    _Bool _supportsFaceTimeVideoRelayCalling;
    _Bool _emergencyCallbackModeEnabled;
    _Bool _emergencyCallbackPossible;
    int _relayCallingAvailability;
    NSDictionary *_relayCallingDisabledForDeviceID;
    NSString *_outgoingRelayCallerID;
    NSArray *_cloudCallingDevices;
    NSDictionary *_senderIdentityCapabilitiesStateByUUID;
}

@property (nonatomic) _Bool supportsPrimaryCalling;
@property (nonatomic) _Bool supportsBasebandCalling;
@property (nonatomic) _Bool supportsCellularData;
@property (nonatomic) _Bool supportsDisplayingTelephonyCalls;
@property (nonatomic) _Bool supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) _Bool supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic, getter=isFaceTimeAudioAvailable) _Bool faceTimeAudioAvailable;
@property (nonatomic, getter=isFaceTimeVideoAvailable) _Bool faceTimeVideoAvailable;
@property (nonatomic, getter=areCTCapabilitiesValid) _Bool ctCapabilitiesValid;
@property (nonatomic) _Bool accountsMatchForSecondaryCalling;
@property (nonatomic) _Bool accountsSupportSecondaryCalling;
@property (nonatomic) _Bool supportsRelayCalling;
@property (nonatomic, getter=isRelayCallingEnabled) _Bool relayCallingEnabled;
@property (nonatomic, getter=areRelayCallingFeaturesEnabled) _Bool relayCallingFeaturesEnabled;
@property (nonatomic) int relayCallingAvailability;
@property (copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID;
@property (copy, nonatomic) NSString *outgoingRelayCallerID;
@property (nonatomic) _Bool supportsTelephonyRelayCalling;
@property (nonatomic) _Bool supportsFaceTimeAudioRelayCalling;
@property (nonatomic) _Bool supportsFaceTimeVideoRelayCalling;
@property (copy, nonatomic) NSArray *cloudCallingDevices;
@property (nonatomic, readonly) TUCloudCallingDevice *defaultPairedDevice;
@property (nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled;
@property (nonatomic, getter=isEmergencyCallbackPossible) _Bool emergencyCallbackPossible;
@property (copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;

@end
