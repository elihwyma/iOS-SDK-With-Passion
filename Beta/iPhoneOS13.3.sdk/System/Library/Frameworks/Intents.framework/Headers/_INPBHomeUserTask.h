/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeUserTask : PBCodable <Swift>

{
    struct {
        unsigned int attribute:1;
        unsigned int taskType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _attribute;
    int _taskType;
    _INPBHomeAttributeValue *_value;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int attribute;
@property (nonatomic) _Bool hasAttribute;
@property (nonatomic) int taskType;
@property (nonatomic) _Bool hasTaskType;
@property (retain, nonatomic) _INPBHomeAttributeValue *value;
@property (nonatomic, readonly) _Bool hasValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
- (int)StringAsTaskType:(id)arg1;
- (id)attributeAsString:(int)arg1;
- (int)StringAsAttribute:(id)arg1;

@end
