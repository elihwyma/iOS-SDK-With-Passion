/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface NFHardwareSecureElementInfo : NSObject

{
    _Bool _restrictedMode;
    _Bool _restrictedPerformanceMode;
    _Bool _osUpdateMode;
    _Bool _personalisable;
    _Bool _jcopTooOld;
    NSString *_identifier;
    unsigned long long _OSVersion;
    unsigned long long _fullOSVersion;
    unsigned long long _firmwareVersion;
    NSNumber *_compiledFWVersion;
    unsigned long long _hardwareVersion;
    unsigned long long _deviceType;
    NSNumber *_sequenceCounter;
    NSNumber *_referenceCounter;
    unsigned long long _osid;
    NSNumber *_otherOSValid;
    unsigned long long _OSMode;
    unsigned long long _signingKeyType;
    unsigned long long _migrationState;
    unsigned long long _migrationContext;
    NSNumber *_migrationPackages;
    NSNumber *_migrationInstances;
    NSString *_platformIdentifier;
    NSString *_serialNumber;
    NSString *_rsaCertificate;
    NSString *_ecdsaCertificate;
    NSString *_eckaCertificate;
    unsigned long long _appletMap;
    NSNumber *_persistentConfigID;
    NSString *_rootKeyID;
    NSString *_osKeyID;
    NSString *_firmwareKeyID;
    NSString *_nonce;
    NSData *_manifestQuery;
    NSArray *_bootHistory;
    unsigned long long _supportedTechnologies;
    unsigned long long _seType;
    NSString *_atrString;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long OSVersion;
@property (nonatomic, readonly) unsigned long long fullOSVersion;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) NSNumber *compiledFWVersion;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly) NSNumber *sequenceCounter;
@property (nonatomic, readonly) NSNumber *referenceCounter;
@property (nonatomic, readonly) unsigned long long osid;
@property (nonatomic, readonly) NSNumber *otherOSValid;
@property (nonatomic, readonly) _Bool restrictedMode;
@property (nonatomic, readonly) _Bool restrictedPerformanceMode;
@property (nonatomic, readonly) _Bool osUpdateMode;
@property (nonatomic, readonly) unsigned long long OSMode;
@property (nonatomic, readonly) unsigned long long signingKeyType;
@property (nonatomic, readonly) unsigned long long migrationState;
@property (nonatomic, readonly) unsigned long long migrationContext;
@property (nonatomic, readonly) NSNumber *migrationPackages;
@property (nonatomic, readonly) NSNumber *migrationInstances;
@property (nonatomic, readonly) NSString *platformIdentifier;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *rsaCertificate;
@property (nonatomic, readonly) NSString *ecdsaCertificate;
@property (nonatomic, readonly) NSString *eckaCertificate;
@property (nonatomic, readonly) unsigned long long appletMap;
@property (nonatomic, readonly) NSNumber *persistentConfigID;
@property (nonatomic, readonly) NSString *rootKeyID;
@property (nonatomic, readonly) NSString *osKeyID;
@property (nonatomic, readonly) NSString *firmwareKeyID;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, readonly) NSData *manifestQuery;
@property (nonatomic, readonly) _Bool personalisable;
@property (nonatomic, readonly) NSArray *bootHistory;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;
@property (nonatomic, readonly) unsigned long long seType;
@property (nonatomic, readonly) NSString *atrString;
@property (nonatomic, readonly) _Bool jcopTooOld;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)asDictionary;
- (void)_setIsInRestrictedMode:(_Bool)arg1;
- (void)_setIsInRestrictedPerformanceMode:(_Bool)arg1;
- (void)setBootHistory:(id)arg1;

@end
