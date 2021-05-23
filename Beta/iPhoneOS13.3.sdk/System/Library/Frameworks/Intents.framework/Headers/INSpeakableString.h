/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface INSpeakableString : NSObject <Swift>

{
    NSString *_spokenPhrase;
    NSString *_pronunciationHint;
    NSString *_vocabularyIdentifier;
    NSArray *_alternativeSpeakableMatches;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *spokenPhrase;
@property (retain, nonatomic) NSString *pronunciationHint;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;

+ (_Bool)supportsSecureCoding;

- (id)string;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithSpokenPhrase:(id)arg1;
- (id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4;
- (id)_effectiveNSStringValue;
- (id)spokenPhrases;
- (id)initWithIdentifier:(id)arg1 string:(id)arg2;

@end
