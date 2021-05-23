/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAUITemplateTemplatedSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *templateItems;

+ (id)templatedSnippet;
+ (id)templatedSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
