/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBContactHandle : PBCodable <Swift>

{
    struct {
        unsigned int emergencyType:1;
        unsigned int type:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _emergencyType;
    int _type;
    NSString *_label;
    NSString *_value;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int emergencyType;
@property (nonatomic) _Bool hasEmergencyType;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasLabel;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, readonly) _Bool hasValue;

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
- (id)emergencyTypeAsString:(int)arg1;
- (int)StringAsEmergencyType:(id)arg1;

@end
