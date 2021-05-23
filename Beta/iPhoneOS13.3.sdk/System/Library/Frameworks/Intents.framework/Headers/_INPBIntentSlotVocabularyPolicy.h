/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_intentSlotNames;
    NSArray *_intentSlotVocabularyConcepts;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *intentSlotNames;
@property (nonatomic, readonly) unsigned long long intentSlotNamesCount;
@property (copy, nonatomic) NSArray *intentSlotVocabularyConcepts;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyConceptsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)intentSlotVocabularyConceptsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIntentSlotNames;
- (void)addIntentSlotNames:(id)arg1;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (void)clearIntentSlotVocabularyConcepts;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;

@end
