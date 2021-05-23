/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageIcon : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    int _iconType;
    struct {
        unsigned int cartoID:1;
        unsigned int defaultTransitType:1;
        unsigned int iconAttributeKey:1;
        unsigned int iconAttributeValue:1;
        unsigned int iconType:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic) _Bool hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) _Bool hasCartoID;
@property (nonatomic) unsigned int cartoID;
@property (nonatomic) _Bool hasDefaultTransitType;
@property (nonatomic) unsigned int defaultTransitType;
@property (nonatomic) _Bool hasIconAttributeKey;
@property (nonatomic) unsigned int iconAttributeKey;
@property (nonatomic) _Bool hasIconAttributeValue;
@property (nonatomic) unsigned int iconAttributeValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)iconTypeAsString:(int)arg1;
- (int)StringAsIconType:(id)arg1;
- (id)initWithIcon:(id)arg1;

@end
