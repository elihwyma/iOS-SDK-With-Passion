/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForTimersIntent : PBCodable <Swift>

{
    struct {
        unsigned int duration:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _state;
    int _type;
    double _duration;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_label;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasDuration;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *label;
@property (nonatomic, readonly) _Bool hasLabel;
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
