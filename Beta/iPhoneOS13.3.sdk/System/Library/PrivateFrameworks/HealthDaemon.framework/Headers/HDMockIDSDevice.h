/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HDMockIDSDevice : NSObject <Swift>

{
    _Bool _isActive;
    _Bool _supportsCinnamonHW;
    _Bool _supportsCinnamonAntimonyGloryF;
    NSUUID *_nanoRegistryPairingID;
    NSUUID *_nsuuid;
    NSString *_uniqueIDOverride;
    NSString *_service;
    NSString *_name;
    NSString *_productBuildVersion;
    NSString *_buildType;
    NSString *_productType;
    NSString *_modelNumber;
    NSString *_systemVersion;
    NSString *_regionCode;
    NSArray *_identities;
    NSString *_electrocardiogramVersion;
    NSString *_backgroundAtrialFibrillationVersion;
}

@property (retain, nonatomic) NSUUID *nanoRegistryPairingID;
@property (retain, nonatomic) NSUUID *nsuuid;
@property (copy, nonatomic) NSString *uniqueIDOverride;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productBuildVersion;
@property (copy, nonatomic) NSString *buildType;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSArray *identities;
@property (copy, nonatomic) NSString *electrocardiogramVersion;
@property (copy, nonatomic) NSString *backgroundAtrialFibrillationVersion;
@property (nonatomic, readonly) _Bool isLocallyPaired;
@property (nonatomic, readonly) _Bool isDefaultPairedDevice;
@property (nonatomic) _Bool isActive;
@property (nonatomic) _Bool supportsCinnamonHW;
@property (nonatomic) _Bool supportsCinnamonAntimonyGloryF;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)relationship;
- (id)hd_deviceIdentifier;
- (id)hd_destinationIdentifier;
- (_Bool)hd_isEquivalentToDevice:(id)arg1;
- (id)hd_shortDescription;

@end
