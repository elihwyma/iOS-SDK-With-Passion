/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBGetReservationDetailsIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_reservations;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *reservations;
@property (nonatomic, readonly) unsigned long long reservationsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)reservationsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearReservations;
- (void)addReservations:(id)arg1;
- (id)reservationsAtIndex:(unsigned long long)arg1;

@end
