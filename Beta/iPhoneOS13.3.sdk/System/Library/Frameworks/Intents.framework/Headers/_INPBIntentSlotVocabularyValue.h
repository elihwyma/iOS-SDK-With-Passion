/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyValue : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_examples;
    NSString *_phrase;
    NSString *_pronunciation;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *examples;
@property (nonatomic, readonly) unsigned long long examplesCount;
@property (copy, nonatomic) NSString *phrase;
@property (nonatomic, readonly) _Bool hasPhrase;
@property (copy, nonatomic) NSString *pronunciation;
@property (nonatomic, readonly) _Bool hasPronunciation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearExamples;
- (void)addExamples:(id)arg1;
- (id)examplesAtIndex:(unsigned long long)arg1;

@end
