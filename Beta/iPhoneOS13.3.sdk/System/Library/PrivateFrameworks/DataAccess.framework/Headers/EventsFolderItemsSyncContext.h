/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface EventsFolderItemsSyncContext : NSObject

{
    int _calEventChangeId;
    int _calRecurrenceChangeId;
    int _calAlarmChangeId;
    int _calAttendeeChangeId;
    int _calAttachmentChangeId;
    int _highestSequenceNumber;
}

@property (nonatomic) int calEventChangeId;
@property (nonatomic) int calRecurrenceChangeId;
@property (nonatomic) int calAlarmChangeId;
@property (nonatomic) int calAttendeeChangeId;
@property (nonatomic) int calAttachmentChangeId;
@property (nonatomic) int highestSequenceNumber;

@end
