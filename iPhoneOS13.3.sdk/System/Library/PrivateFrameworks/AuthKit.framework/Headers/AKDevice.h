//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSLocale, NSNumber, NSString;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying>
{
//     struct os_unfair_lock_s _unfairLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
    NSString *_uniqueDeviceIdentifier;
    NSString *_serverFriendlyDescription;
    NSString *_color;
    NSString *_enclosureColor;
    NSNumber *_coverGlassColor;
    NSNumber *_housingColor;
    NSNumber *_backingColor;
    NSLocale *_locale;
    NSString *_ROMAddress;
    NSString *_MLBSerialNumber;
    NSString *_modelNumber;
    NSUInteger _linkType;
}

+ (long long)currentDeviceAuthenticationMode;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)_buildNumber;
+ (id)_osVersion;
+ (id)_osName;
+ (id)_hardwareModel;
+ (id)deviceWithSerializedData:(id)arg1;
+ (id)systemContainerCacheURL;
+ (id)systemContainerURL;
+ (BOOL)supportsSecureCoding;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
@property(setter=setLinkType:) NSUInteger linkType; // @synthesize linkType=_linkType;
// - (void).cxx_destruct;
- (id)_volumeGroupUUID;
@property(readonly) NSString *phoneNumber;
@property(readonly) BOOL isMultiUserMode;
@property(readonly) BOOL isInternalBuild;
@property(readonly) NSString *integratedCircuitCardIdentifier;
@property(readonly) NSString *mobileEquipmentIdentifier;
@property(readonly) BOOL isFaceIDCapable;
@property(readonly) BOOL isBiometricAuthCapable;
@property(readonly) BOOL isProtectedWithPasscode;
@property(readonly) BOOL isInCircle;
@property(readonly) BOOL isUnlocked;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *internationalMobileEquipmentIdentity;
@property(readonly) NSString *userFullName;
@property(readonly) NSString *localUserUUID;
@property(readonly) NSString *userChosenName;
@property(copy, nonatomic) NSString *serverFriendlyDescription; // @synthesize serverFriendlyDescription=_serverFriendlyDescription;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *MLBSerialNumber; // @synthesize MLBSerialNumber=_MLBSerialNumber;
@property(copy, nonatomic) NSString *ROMAddress; // @synthesize ROMAddress=_ROMAddress;
@property(copy, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(copy, nonatomic) NSNumber *backingColor; // @synthesize backingColor=_backingColor;
@property(copy, nonatomic) NSNumber *housingColor; // @synthesize housingColor=_housingColor;
@property(copy, nonatomic) NSNumber *coverGlassColor; // @synthesize coverGlassColor=_coverGlassColor;
@property(copy, nonatomic) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
- (void)_setShouldUpdateToValue:(BOOL)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSData *serializedData;
- (id)init;

@end

