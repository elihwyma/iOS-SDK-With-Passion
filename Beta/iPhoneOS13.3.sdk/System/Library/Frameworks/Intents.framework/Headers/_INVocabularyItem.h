/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <Swift>

{
    NSString *_string;
    NSString *_vocabularyIdentifier;
    NSUUID *__siriID;
}

@property (copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)validate;
- (id)_initWithVocabularyItem:(id)arg1;
- (id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)_initWithUncheckedSpeakable:(id)arg1;
- (id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)initWithSpeakable:(id)arg1;
- (_Bool)_isSimilarEnoughToNotSync:(id)arg1;
- (id)_dictionaryForSaving;

@end
