/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAppIdentifier;

@interface _INPBIntentExecutionRequest : PBCodable <Swift>

{
    CDStruct_a8e956ad _has;
    _Bool __encodeLegacyGloryData;
    int _encodingFormat;
    _INPBAppIdentifier *_appIdentifier;
    NSString *_encodedIntent;
    NSString *_encodedIntentDefinition;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBAppIdentifier *appIdentifier;
@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (copy, nonatomic) NSString *encodedIntent;
@property (nonatomic, readonly) _Bool hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentDefinition;
@property (nonatomic, readonly) _Bool hasEncodedIntentDefinition;
@property (nonatomic) int encodingFormat;
@property (nonatomic) _Bool hasEncodingFormat;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)encodingFormatAsString:(int)arg1;
- (int)StringAsEncodingFormat:(id)arg1;

@end
