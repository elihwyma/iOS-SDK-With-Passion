/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

@interface MSPPinnedPlaceContactStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_contactIdentifier;
    NSString *_handleValue;
    NSString *_labeledValueIdentifier;
}

@property (nonatomic, readonly) _Bool hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic, readonly) _Bool hasLabeledValueIdentifier;
@property (retain, nonatomic) NSString *labeledValueIdentifier;
@property (nonatomic, readonly) _Bool hasHandleValue;
@property (retain, nonatomic) NSString *handleValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
