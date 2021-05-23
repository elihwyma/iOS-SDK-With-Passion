/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentVocabulary : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_intentSlotVocabularyPolicies;
    NSArray *_intentTypePhrases;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *intentSlotVocabularyPolicies;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyPoliciesCount;
@property (copy, nonatomic) NSArray *intentTypePhrases;
@property (nonatomic, readonly) unsigned long long intentTypePhrasesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (void)clearIntentTypePhrases;
- (void)addIntentTypePhrases:(id)arg1;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;

@end
