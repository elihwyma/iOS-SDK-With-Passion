/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSString;

@interface TURoute : NSObject <Swift>

{
    _Bool _currentlyPicked;
    _Bool _defaultRoute;
    _Bool _receiver;
    _Bool _speaker;
    _Bool _wiredHeadphones;
    _Bool _wiredHeadset;
    _Bool _wirelessHeadset;
    _Bool _airTunes;
    _Bool _carAudio;
    _Bool _guest;
    _Bool _bluetooth;
    _Bool _bluetoothLE;
    _Bool _preferred;
    _Bool _preferredAndActive;
    _Bool _supportsPreferredAndActive;
    _Bool _supportsRelay;
    NSString *_uniqueIdentifier;
    NSString *_name;
    long long _deviceType;
    long long _bluetoothEndpointType;
    NSArray *_identifiersOfOtherConnectedDevices;
}

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
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRoute:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2;

@end
