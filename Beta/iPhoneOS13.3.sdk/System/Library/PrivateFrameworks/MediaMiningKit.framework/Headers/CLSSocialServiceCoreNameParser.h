/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@class NPNameParser, NSCharacterSet, NSDictionary, NSMutableDictionary;

@interface CLSSocialServiceCoreNameParser

{
    NPNameParser *_nameParser;
    NSMutableDictionary *_genderHintByCNIdentifier;
    NSDictionary *_vocabularyByRelationshipByLocale;
    NSMutableDictionary *_regularExpressionByRelationshipByLocale;
    NSCharacterSet *_nonLetterCharacterSet;
}

@property (retain) NPNameParser *nameParser;
@property (retain, nonatomic) NSMutableDictionary *genderHintByCNIdentifier;
@property (retain, nonatomic) NSDictionary *vocabularyByRelationshipByLocale;
@property (retain, nonatomic) NSMutableDictionary *regularExpressionByRelationshipByLocale;
@property (retain, nonatomic) NSCharacterSet *nonLetterCharacterSet;

+ (id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1;
+ (unsigned long long)_personRelationshipFromString:(id)arg1;

- (id)init;
- (void)invalidateMemoryCaches;
- (unsigned long long)genderHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (unsigned long long)_genderHintForRelationship:(unsigned long long)arg1;
- (id)_normalizeName:(id)arg1;
- (id)_parentRelationships;
- (id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2;

@end
