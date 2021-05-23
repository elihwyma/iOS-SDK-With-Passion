/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentType;

@interface _INPBIntentTypePhrases : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentType *_intentType;
    NSArray *_intentVocabularyExamples;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentType *intentType;
@property (nonatomic, readonly) _Bool hasIntentType;
@property (copy, nonatomic) NSArray *intentVocabularyExamples;
@property (nonatomic, readonly) unsigned long long intentVocabularyExamplesCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIntentVocabularyExamples;
- (void)addIntentVocabularyExamples:(id)arg1;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;

@end
