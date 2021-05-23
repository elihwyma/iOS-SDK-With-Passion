/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalInProcessReminderMigrator : NSObject

{
    id <CalReminderKitProvider> _reminderKitProvider;
    id <CalReminderMigrationDefaultsProvider> _defaultsProvider;
}

@property (nonatomic, readonly) id <CalReminderKitProvider> reminderKitProvider;
@property (nonatomic, readonly) id <CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2;
- (_Bool)attemptMigrationWithHomeDirectory:(id)arg1;

@end
