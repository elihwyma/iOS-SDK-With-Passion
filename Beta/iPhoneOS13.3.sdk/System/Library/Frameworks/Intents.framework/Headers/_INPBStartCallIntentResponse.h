/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBStartCallIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int confirmationReason:1;
        unsigned int shouldDoEmergencyCountdown:1;
    } _has;
    _Bool _shouldDoEmergencyCountdown;
    _Bool __encodeLegacyGloryData;
    int _confirmationReason;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int confirmationReason;
@property (nonatomic) _Bool hasConfirmationReason;
@property (nonatomic) _Bool shouldDoEmergencyCountdown;
@property (nonatomic) _Bool hasShouldDoEmergencyCountdown;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)confirmationReasonAsString:(int)arg1;
- (int)StringAsConfirmationReason:(id)arg1;

@end
