/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSArray;

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *regions;

+ (id)assistantHintView;
+ (id)assistantHintViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
