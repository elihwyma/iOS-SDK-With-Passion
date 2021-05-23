/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupSettingSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *text;

+ (id)settingSnippetTemplate;
+ (id)settingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
