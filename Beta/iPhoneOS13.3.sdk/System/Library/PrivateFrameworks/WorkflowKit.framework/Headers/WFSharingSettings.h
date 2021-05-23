/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFSharingSettings : NSObject

+ (_Bool)sharingEnabled;
+ (_Bool)shortcutFileSharingEnabled;
+ (id)sharingDisabledAlertWithWorkflowName:(id)arg1;
+ (id)shortcutFileSharingDisabledAlert;

@end
