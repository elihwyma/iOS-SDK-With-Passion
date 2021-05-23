/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SAUISiriSearchJSONSnippet : SAUISnippet

@property (copy, nonatomic) NSString *clientTemplate;

+ (id)siriSearchJSONSnippet;
+ (id)siriSearchJSONSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
