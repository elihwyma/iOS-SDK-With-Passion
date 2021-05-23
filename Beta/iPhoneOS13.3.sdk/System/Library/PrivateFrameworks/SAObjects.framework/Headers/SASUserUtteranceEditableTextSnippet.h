/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utterance;

+ (id)userUtteranceEditableTextSnippet;
+ (id)userUtteranceEditableTextSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
