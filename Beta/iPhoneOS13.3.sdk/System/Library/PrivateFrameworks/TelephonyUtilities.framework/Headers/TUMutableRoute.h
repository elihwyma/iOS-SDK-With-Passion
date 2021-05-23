/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TURoute.h>

@class NSArray;

@interface TUMutableRoute : TURoute

@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isCurrentlyPicked) _Bool currentlyPicked;
@property (nonatomic, getter=isDefaultRoute) _Bool defaultRoute;
@property (nonatomic, getter=isReceiver) _Bool receiver;
@property (nonatomic, getter=isSpeaker) _Bool speaker;
@property (nonatomic, getter=isWiredHeadphones) _Bool wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) _Bool wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) _Bool wirelessHeadset;
@property (nonatomic, getter=isAirTunes) _Bool airTunes;
@property (nonatomic, getter=isCarAudio) _Bool carAudio;
@property (nonatomic, getter=isGuest) _Bool guest;
@property (nonatomic, getter=isBluetooth) _Bool bluetooth;
@property (nonatomic, getter=isBluetoothLE) _Bool bluetoothLE;
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isPreferred) _Bool preferred;
@property (nonatomic, getter=isPreferredAndActive) _Bool preferredAndActive;
@property (nonatomic) _Bool supportsPreferredAndActive;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic) _Bool supportsRelay;

+ (_Bool)supportsSecureCoding;

@end
