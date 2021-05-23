/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDNotifierConfiguration, NSString, UNUserNotificationCenter;

@protocol OS_os_log;

@interface DEDUserNotificationNotifier : NSObject

{
    DEDNotifierConfiguration *_config;
    NSString *_bugSessionIdentifier;
    UNUserNotificationCenter *_center;
    NSObject<OS_os_log> *_log;
}

@property (weak) DEDNotifierConfiguration *config;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) UNUserNotificationCenter *center;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (void)scheduleNotification;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)cancelNotification;
- (id)createNotificationCenter;

@end
