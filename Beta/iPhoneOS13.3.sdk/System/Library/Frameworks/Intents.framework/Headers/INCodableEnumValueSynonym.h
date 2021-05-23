/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableEnumValue, NSString;

@interface INCodableEnumValueSynonym : NSObject <Swift>

{
    INCodableEnumValue *_codableEnumValue;
    NSString *_pronunciationHint;
    NSString *_pronunciationHintLocID;
    NSString *_synonym;
    NSString *_synonymLocID;
}

@property (weak, nonatomic, setter=_setCodableEnumValue:) INCodableEnumValue *_codableEnumValue;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *pronunciationHintLocID;
@property (copy, nonatomic) NSString *synonym;
@property (copy, nonatomic) NSString *synonymLocID;
@property (copy, nonatomic, readonly) NSString *localizedSynonym;
@property (copy, nonatomic, readonly) NSString *localizedPronunciationHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)localizedSynonymForLanguage:(id)arg1;
- (id)localizedPronunciationHintForLanguage:(id)arg1;

@end
