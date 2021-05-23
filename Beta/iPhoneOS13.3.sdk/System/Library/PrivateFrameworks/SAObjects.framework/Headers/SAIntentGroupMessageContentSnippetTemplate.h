/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *content;
@property (nonatomic) _Bool sentStatus;

+ (id)messageContentSnippetTemplate;
+ (id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
