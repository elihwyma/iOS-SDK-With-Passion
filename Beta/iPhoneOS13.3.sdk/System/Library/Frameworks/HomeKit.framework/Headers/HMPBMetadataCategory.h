/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface HMPBMetadataCategory : PBCodable

{
    NSString *_desc;
    int _number;
    NSString *_type;
    struct {
        unsigned int number:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasDesc;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) _Bool hasNumber;
@property (nonatomic) int number;

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
