/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKUIAccountErrorDisplayer : NSObject

+ (unsigned long long)severityForError:(unsigned long long)arg1;
+ (_Bool)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2;
+ (void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3;
+ (unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2;
+ (void)presentAlertForOfflineErrorUsingViewController:(id)arg1;
+ (_Bool)errorIsActionable:(unsigned long long)arg1;

@end
