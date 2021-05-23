/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMStore;

@interface REMSiriSearchLimitedDataView : NSObject

{
    REMStore *_store;
}

@property (nonatomic, readonly) REMStore *store;

- (id)initWithStore:(id)arg1;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id *)arg7;

@end
