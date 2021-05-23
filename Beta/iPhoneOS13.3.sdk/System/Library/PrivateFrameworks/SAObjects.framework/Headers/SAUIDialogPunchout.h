/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class SAUIAssistantUtteranceView, SAUIButton;

@interface SAUIDialogPunchout : SAAceView

@property (retain, nonatomic) SAUIButton *buttonView;
@property (retain, nonatomic) SAUIAssistantUtteranceView *utteranceView;

+ (id)dialogPunchout;
+ (id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
