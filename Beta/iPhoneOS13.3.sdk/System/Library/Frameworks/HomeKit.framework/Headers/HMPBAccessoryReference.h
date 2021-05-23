/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class HMPBHomeReference, NSData;

@interface HMPBAccessoryReference : PBCodable

{
    HMPBHomeReference *_homeReference;
    NSData *_uniqueIdentifier;
}

@property (nonatomic, readonly) _Bool hasHomeReference;
@property (retain, nonatomic) HMPBHomeReference *homeReference;
@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)accessoryReferenceWithAccessory:(id)arg1;
+ (id)accessoryReferenceWithData:(id)arg1;

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
