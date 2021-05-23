/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface HAPMetadata : HMFObject

{
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSString *_hapBaseUUIDSuffix;
    NSDictionary *_rawPlist;
    NSMutableArray *_parsedUUIDs;
    NSDictionary *_hapUnitMap;
    NSDictionary *_hapPropertyMap;
    NSDictionary *_hapCharacteristicMap;
    NSDictionary *_hapServiceMap;
    NSSet *_hapSupportsAuthDataSet;
    NSDictionary *_hapCharacteristicNameTypeMap;
    NSDictionary *_hapServiceNameTypeMap;
}

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (retain, nonatomic) NSString *hapBaseUUIDSuffix;
@property (retain, nonatomic) NSMutableArray *parsedUUIDs;
@property (retain, nonatomic) NSDictionary *hapUnitMap;
@property (retain, nonatomic) NSDictionary *hapPropertyMap;
@property (retain, nonatomic) NSDictionary *hapCharacteristicMap;
@property (retain, nonatomic) NSDictionary *hapServiceMap;
@property (retain, nonatomic) NSSet *hapSupportsAuthDataSet;
@property (retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap;
@property (retain, nonatomic) NSDictionary *hapServiceNameTypeMap;
@property (nonatomic, readonly) NSDictionary *rawPlist;
@property (nonatomic, readonly) NSArray *hapValueUnits;
@property (nonatomic, readonly) NSArray *hapProperties;
@property (nonatomic, readonly) NSArray *hapCharacteristics;
@property (nonatomic, readonly) NSArray *hapServices;
@property (nonatomic, readonly) NSArray *hapSupportsAuthDataTuples;

+ (id)getSharedInstance;
+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;
+ (id)getBuiltinInstance;
+ (void)setBuiltinInstanceWithDictionary:(id)arg1;
+ (_Bool)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;

- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)btleToServiceType:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (_Bool)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)generateDictionary;
- (id)characteristicUTIFromType:(id)arg1;
- (_Bool)parseVersion:(id)arg1;
- (_Bool)parseMetadata:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)serviceTypeFromUTI:(id)arg1;
- (id)parseUnits:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)hapServiceFromType:(id)arg1;
- (id)hapCharacteristicFromType:(id)arg1;
- (id)hapUnitFromName:(id)arg1;
- (_Bool)updateRawPlist;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (_Bool)isStandardHAPService:(id)arg1;
- (_Bool)isStandardHAPServiceName:(id)arg1;
- (_Bool)isStandardHAPCharacteristic:(id)arg1;
- (_Bool)isStandardHAPCharacteristicName:(id)arg1;
- (_Bool)isStandardHAPUnitName:(id)arg1;
- (_Bool)allowAssociatedService:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (_Bool)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (id)characteristicValueUnitOfType:(id)arg1;
- (id)serviceTypeToBTLE:(id)arg1;
- (_Bool)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (id)hapCharacteristicFromName:(id)arg1;
- (id)hapServiceFromName:(id)arg1;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;

@end
