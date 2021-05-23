/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class HMPBAccessoryReference, NSData;

@interface HMPBServiceReference : PBCodable

{
    HMPBAccessoryReference *_accessoryReference;
    NSData *_uniqueIdentifier;
}

@property (nonatomic, readonly) _Bool hasAccessoryReference;
@property (retain, nonatomic) HMPBAccessoryReference *accessoryReference;
@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)serviceReferenceWithService:(id)arg1;
+ (id)serviceReferenceWithData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
