/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUAutoInstallFailureNotification : NSObject

{
    struct __CFUserNotification *_notification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)dismissNotification;
- (void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;
- (void)postNotificationForError:(id)arg1;

@end
