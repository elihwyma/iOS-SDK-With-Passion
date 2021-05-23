/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBAppNames *_appNames;
    _INPBIntentVocabulary *_intentVocabulary;
    _INPBLanguageTag *_language;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBAppNames *appNames;
@property (nonatomic, readonly) _Bool hasAppNames;
@property (retain, nonatomic) _INPBIntentVocabulary *intentVocabulary;
@property (nonatomic, readonly) _Bool hasIntentVocabulary;
@property (retain, nonatomic) _INPBLanguageTag *language;
@property (nonatomic, readonly) _Bool hasLanguage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
