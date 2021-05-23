/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@interface REMAccountCapabilities : NSObject

{
    _Bool _supportsSubtasks;
    _Bool _supportsAttachments;
    _Bool _supportsListAppearance;
    _Bool _supportsGroups;
    _Bool _supportsFlagged;
    _Bool _supportsPersonTrigger;
    _Bool _supportsLocation;
    _Bool _supportsHourlyRecurrence;
    _Bool _supportsEventKitSync;
    _Bool _supportsCloudKitSync;
    _Bool _supportsCalDAVNotifications;
    _Bool _supportsListSharees;
    _Bool _supportsListShareesMutation;
    _Bool _supportsMoveAcrossLists;
    _Bool _supportsMoveAcrossSharedToMeLists;
    _Bool _supportsHandoff;
    _Bool _supportsReminderActions;
    _Bool _supportsCRDTs;
    long long _defaultReminderPriorityLevel;
}

@property (nonatomic, readonly) _Bool supportsEventKitSync;
@property (nonatomic, readonly) _Bool supportsCloudKitSync;
@property (nonatomic, readonly) _Bool supportsCalDAVNotifications;
@property (nonatomic, readonly) _Bool supportsListSharees;
@property (nonatomic, readonly) _Bool supportsListShareesMutation;
@property (nonatomic, readonly) _Bool supportsMoveAcrossLists;
@property (nonatomic, readonly) _Bool supportsMoveAcrossSharedToMeLists;
@property (nonatomic, readonly) long long defaultReminderPriorityLevel;
@property (nonatomic, readonly) _Bool supportsHandoff;
@property (nonatomic, readonly) _Bool supportsReminderActions;
@property (nonatomic, readonly) _Bool supportsCRDTs;
@property (nonatomic, readonly) _Bool supportsSubtasks;
@property (nonatomic, readonly) _Bool supportsAttachments;
@property (nonatomic, readonly) _Bool supportsListAppearance;
@property (nonatomic, readonly) _Bool supportsGroups;
@property (nonatomic, readonly) _Bool supportsFlagged;
@property (nonatomic, readonly) _Bool supportsPersonTrigger;
@property (nonatomic, readonly) _Bool supportsLocation;
@property (nonatomic, readonly) _Bool supportsHourlyRecurrence;

- (id)initWithAccountType:(long long)arg1;

@end
