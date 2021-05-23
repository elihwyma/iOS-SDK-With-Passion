/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_identifier;
    NSArray *_synonyms;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic, readonly) unsigned long long synonymsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)synonymsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearSynonyms;
- (void)addSynonyms:(id)arg1;
- (id)synonymsAtIndex:(unsigned long long)arg1;

@end
