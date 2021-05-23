/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable

{
    PBUnknownFields *_unknownFields;
    long long _shieldType;
    NSString *_shieldColorString;
    NSString *_shieldText;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) _Bool hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) _Bool hasShieldType;
@property (nonatomic) long long shieldType;
@property (nonatomic, readonly) _Bool hasShieldColorString;
@property (retain, nonatomic) NSString *shieldColorString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithShield:(id)arg1;

@end
