/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBVoiceCommandStepInfo : PBCodable <Swift>

{
    CDStruct_74e42c4c _has;
    _Bool __encodeLegacyGloryData;
    int _category;
    NSString *_applicationIdentifier;
    NSString *_name;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool hasApplicationIdentifier;
@property (nonatomic) int category;
@property (nonatomic) _Bool hasCategory;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)categoryAsString:(int)arg1;
- (int)StringAsCategory:(id)arg1;

@end
