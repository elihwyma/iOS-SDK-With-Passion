/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (retain, nonatomic) id <SAAlarmAlarmAction> alarmAction;

+ (id)showAndPerformAlarmAction;
+ (id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
