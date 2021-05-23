/*
 Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

#import <Foundation/NSObject.h>

@interface BiometricSupportUserNotification : NSObject

+ (void)displaySensorIssueNotificationWithHeader:(id)arg1 message:(id)arg2 button:(id)arg3;
+ (void)displayTouchIDIssueNotification;
+ (void)displayPearlIssueNotification;
+ (void)displayPearlInterlockIssueNotification:(_Bool)arg1;
+ (void)displayStopAlertWithHeader:(id)arg1 andMessage:(id)arg2;

@end
