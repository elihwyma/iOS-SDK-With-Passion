/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SAUIErrorSnippet : SAUISnippet

@property (copy, nonatomic) NSString *message;

+ (id)errorSnippet;
+ (id)errorSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
