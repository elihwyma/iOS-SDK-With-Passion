/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID, PKRemotePaymentInstrument;

@interface PKRemoteDevice : NSObject <Swift>

{
    _Bool _isLocked;
    _Bool _userDisabled;
    _Bool _deviceDisabled;
    _Bool _supportsFaceID;
    NSString *_deviceName;
    long long _type;
    NSString *_modelIdentifier;
    NSDate *_lastSeen;
    long long _proximityState;
    NSArray *_remotePaymentInstruments;
    PKRemotePaymentInstrument *_defaultRemotePaymentInstrument;
    NSString *_uniqueID;
    NSUUID *_bluetoothUUID;
    NSArray *_supportedSetupFeatures;
}

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSDate *lastSeen;
@property (nonatomic, readonly) _Bool canMakePayments;
@property (nonatomic) long long proximityState;
@property (nonatomic) _Bool isLocked;
@property (nonatomic) _Bool userDisabled;
@property (nonatomic) _Bool deviceDisabled;
@property (retain, nonatomic) NSArray *remotePaymentInstruments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSUUID *bluetoothUUID;
@property (nonatomic) _Bool supportsFaceID;
@property (retain, nonatomic) NSArray *supportedSetupFeatures;

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)acceptedComparatorForSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webService:(id)arg3;
+ (CDUnknownBlockType)preferenceComparator;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_deviceTypeForModelIdentifier:(id)arg1;
- (_Bool)isEqualToRemoteDevice:(id)arg1;
- (id)initWithIDSDevice:(id)arg1;
- (id)pk_idsDestination;

@end
