/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TURoute.h>

@class NSDictionary, NSString;

@interface TUAudioRoute : TURoute

{
    NSString *_avAudioRouteName;
    NSDictionary *_route;
}

@property (copy, nonatomic, readonly) NSString *avAudioRouteName;
@property (copy, nonatomic, readonly) NSString *bluetoothProductIdentifier;
@property (nonatomic, readonly, getter=isHeadphoneJackConnected) _Bool headphoneJackConnected;
@property (copy, nonatomic, readonly) NSDictionary *route;

- (id)initWithDictionary:(id)arg1;
- (long long)deviceType;
- (_Bool)isPreferred;
- (_Bool)isCurrentlyPicked;
- (_Bool)isReceiver;
- (_Bool)isSpeaker;
- (_Bool)isDefaultRoute;
- (_Bool)isWiredHeadphones;
- (_Bool)isWiredHeadset;
- (_Bool)isWirelessHeadset;
- (_Bool)isAirTunes;
- (_Bool)isCarAudio;
- (_Bool)isBluetooth;
- (_Bool)isBluetoothLE;
- (long long)bluetoothEndpointType;
- (_Bool)isPreferredAndActive;
- (_Bool)supportsPreferredAndActive;
- (id)identifiersOfOtherConnectedDevices;
- (_Bool)_routeTypeEqualTo:(id)arg1;
- (_Bool)isHandset;

@end
