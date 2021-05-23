/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSData;

@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (copy, nonatomic) NSData *value;

+ (id)keyValueBlobEntry;
+ (id)keyValueBlobEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
