/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetReservationDetailsIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_reservationContainerReference;
    NSArray *_reservationItemReferences;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *reservationContainerReference;
@property (nonatomic, readonly) _Bool hasReservationContainerReference;
@property (copy, nonatomic) NSArray *reservationItemReferences;
@property (nonatomic, readonly) unsigned long long reservationItemReferencesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)reservationItemReferencesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearReservationItemReferences;
- (void)addReservationItemReferences:(id)arg1;
- (id)reservationItemReferencesAtIndex:(unsigned long long)arg1;

@end
