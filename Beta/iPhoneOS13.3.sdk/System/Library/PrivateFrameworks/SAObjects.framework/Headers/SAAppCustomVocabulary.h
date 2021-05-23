/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAppCustomVocabulary : SADomainObject

@property (copy, nonatomic) NSString *intentSlotValue;
@property (copy, nonatomic) NSString *vocabularyIdentifier;

+ (id)appCustomVocabulary;
+ (id)appCustomVocabularyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
