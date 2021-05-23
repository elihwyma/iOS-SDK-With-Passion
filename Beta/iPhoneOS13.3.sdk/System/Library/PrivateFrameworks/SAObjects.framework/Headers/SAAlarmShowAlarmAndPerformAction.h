/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet

@property (retain, nonatomic) id <SAAlarmAlarmAction> alarmAction;

+ (id)showAlarmAndPerformAction;
+ (id)showAlarmAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
