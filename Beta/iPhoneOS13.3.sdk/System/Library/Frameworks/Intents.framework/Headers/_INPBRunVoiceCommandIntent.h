/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentExecutionResult, _INPBIntentMetadata, _INPBVoiceCommandDeviceInformation;

@interface _INPBRunVoiceCommandIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentExecutionResult *_executionResult;
    _INPBIntentMetadata *_intentMetadata;
    _INPBVoiceCommandDeviceInformation *_originDevice;
    NSString *_previousIntentIdentifier;
    _INPBDataString *_voiceCommand;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentExecutionResult *executionResult;
@property (nonatomic, readonly) _Bool hasExecutionResult;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice;
@property (nonatomic, readonly) _Bool hasOriginDevice;
@property (copy, nonatomic) NSString *previousIntentIdentifier;
@property (nonatomic, readonly) _Bool hasPreviousIntentIdentifier;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (nonatomic, readonly) _Bool hasVoiceCommand;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
