/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <Swift>

{
    struct {
        unsigned int defroster:1;
        unsigned int enable:1;
    } _has;
    _Bool _enable;
    _Bool __encodeLegacyGloryData;
    int _defroster;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) int defroster;
@property (nonatomic) _Bool hasDefroster;
@property (nonatomic) _Bool enable;
@property (nonatomic) _Bool hasEnable;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)defrosterAsString:(int)arg1;
- (int)StringAsDefroster:(id)arg1;

@end
