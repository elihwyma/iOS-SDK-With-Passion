/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SATimerTimerAction;

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (retain, nonatomic) id <SATimerTimerAction> timerAction;

+ (id)showAndPerformTimerAction;
+ (id)showAndPerformTimerActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
