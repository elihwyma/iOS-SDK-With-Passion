/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@protocol SAServerBoundCommand;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (nonatomic) _Bool selected;
@property (retain, nonatomic) id <SAServerBoundCommand> updateSlotCommand;

+ (id)choiceSettingSnippetTemplate;
+ (id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
