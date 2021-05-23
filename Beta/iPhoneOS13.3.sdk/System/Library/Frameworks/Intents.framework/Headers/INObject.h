/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface INObject : NSObject <Swift>

{
    NSMutableDictionary *_valueForKeyDictionary;
    NSString *_identifier;
    NSString *_displayString;
    NSString *_pronunciationHint;
    NSArray *_alternativeSpeakableMatches;
}

@property (nonatomic, readonly) NSMutableDictionary *_valueForKeyDictionary;
@property (nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (retain, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2;

@end
