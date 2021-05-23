/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBImageValue;

@interface _INPBShortcutOverview : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBDataString *_descriptiveText;
    _INPBImageValue *_icon;
    _INPBDataString *_name;
    NSArray *_steps;
    _INPBDataString *_voiceCommand;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *descriptiveText;
@property (nonatomic, readonly) _Bool hasDescriptiveText;
@property (retain, nonatomic) _INPBImageValue *icon;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) _INPBDataString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (nonatomic, readonly) _Bool hasVoiceCommand;

+ (_Bool)supportsSecureCoding;
+ (Class)stepsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (void)clearSteps;
- (void)addSteps:(id)arg1;

@end
