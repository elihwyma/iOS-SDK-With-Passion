/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBSetTimerAttributeIntent : PBCodable <Swift>

{
    struct {
        unsigned int toDuration:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
    double _toDuration;
    _INPBDataString *_toLabel;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (nonatomic, readonly) _Bool hasTargetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic) _Bool hasToDuration;
@property (retain, nonatomic) _INPBDataString *toLabel;
@property (nonatomic, readonly) _Bool hasToLabel;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
