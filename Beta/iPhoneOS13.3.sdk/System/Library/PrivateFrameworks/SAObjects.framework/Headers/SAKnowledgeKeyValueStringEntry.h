/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSString *value;

+ (id)keyValueStringEntry;
+ (id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
