/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAUISnippet;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (retain, nonatomic) SAUISnippet *detailSnippet;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *key;

+ (id)snippetTemplate;
+ (id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
