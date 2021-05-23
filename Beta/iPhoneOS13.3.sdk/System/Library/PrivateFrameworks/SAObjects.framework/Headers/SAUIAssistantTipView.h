/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSString;

@interface SAUIAssistantTipView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSString *flowIdentifier;
@property (copy, nonatomic) NSString *tipPrefix;

+ (id)assistantTipView;
+ (id)assistantTipViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
