/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@protocol SATimerTimerAction;

@interface SATimerShowTimerAndPerformAction : SAUISnippet

@property (retain, nonatomic) id <SATimerTimerAction> timerAction;

+ (id)showTimerAndPerformAction;
+ (id)showTimerAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
