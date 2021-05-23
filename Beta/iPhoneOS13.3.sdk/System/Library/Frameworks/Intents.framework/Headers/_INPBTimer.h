/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <Swift>

{
    struct {
        unsigned int duration:1;
        unsigned int remainingTime:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _state;
    int _type;
    double _duration;
    NSString *_identifier;
    _INPBDataString *_label;
    double _remainingTime;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasDuration;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDataString *label;
@property (nonatomic, readonly) _Bool hasLabel;
@property (nonatomic) double remainingTime;
@property (nonatomic) _Bool hasRemainingTime;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;

@end
