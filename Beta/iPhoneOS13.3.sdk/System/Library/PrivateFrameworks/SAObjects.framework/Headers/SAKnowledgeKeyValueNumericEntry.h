/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSNumber;

@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSNumber *value;

+ (id)keyValueNumericEntry;
+ (id)keyValueNumericEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
