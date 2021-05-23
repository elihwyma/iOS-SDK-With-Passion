/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *definitionGroups;
@property (copy, nonatomic) NSString *phoneticPronunciation;
@property (copy, nonatomic) NSURL *sound;
@property (copy, nonatomic) NSArray *syllables;
@property (copy, nonatomic) NSString *word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dictionaryStructuredAnswer;
+ (id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
