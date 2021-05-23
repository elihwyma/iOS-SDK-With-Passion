/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface HMPBMetadataCharacteristic : PBCodable

{
    NSString *_desc;
    NSString *_type;
}

@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasDesc;
@property (retain, nonatomic) NSString *desc;

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
