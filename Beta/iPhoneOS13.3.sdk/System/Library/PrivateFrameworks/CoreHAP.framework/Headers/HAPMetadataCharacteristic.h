/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPMetadataCharacteristicValue, NSNumber, NSString;

@interface HAPMetadataCharacteristic : HMFObject

{
    NSString *_name;
    NSString *_chrDescription;
    NSString *_uuidStr;
    NSNumber *_properties;
    NSString *_format;
    NSString *_units;
    HAPMetadataCharacteristicValue *_valueMetadata;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *chrDescription;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSNumber *properties;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *units;
@property (retain, nonatomic) HAPMetadataCharacteristicValue *valueMetadata;

- (id)description;
- (void)dump;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5;
- (id)generateDictionary:(id)arg1;

@end
