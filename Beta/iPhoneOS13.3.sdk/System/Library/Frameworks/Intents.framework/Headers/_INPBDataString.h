/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBDataString : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_alternatives;
    NSString *_localizedValue;
    NSString *_pronunciationHint;
    NSString *_vocabularyIdentifier;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *localizedValue;
@property (nonatomic, readonly) _Bool hasLocalizedValue;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (nonatomic, readonly) _Bool hasPronunciationHint;
@property (copy, nonatomic) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) _Bool hasVocabularyIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)alternativesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearAlternatives;
- (void)addAlternatives:(id)arg1;
- (id)alternativesAtIndex:(unsigned long long)arg1;

@end
