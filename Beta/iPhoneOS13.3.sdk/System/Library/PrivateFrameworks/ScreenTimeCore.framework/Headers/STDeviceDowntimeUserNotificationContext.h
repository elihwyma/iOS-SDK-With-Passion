/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSString;

@interface STDeviceDowntimeUserNotificationContext

{
    NSString *_localizedUserNotificationBodyKey;
}

@property (copy, nonatomic) NSString *localizedUserNotificationBodyKey;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2;
- (id)notificationBundleIdentifier;

@end
