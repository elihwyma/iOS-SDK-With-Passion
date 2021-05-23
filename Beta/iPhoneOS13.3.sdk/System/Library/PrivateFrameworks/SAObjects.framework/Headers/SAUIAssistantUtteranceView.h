/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSNumber, NSString;

@interface SAUIAssistantUtteranceView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSNumber *postDialogDelayInMilliseconds;
@property (copy, nonatomic) NSString *text;

+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
