/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNInMemoryTimeToLeaveRefreshStorage, NSString;

@protocol OS_dispatch_queue;

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject

{
    NSString *_path;
    CALNInMemoryTimeToLeaveRefreshStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)persistentStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg1 error:(id *)arg2;

- (id)initWithPath:(id)arg1;
- (id)refreshDateWithIdentifier:(id)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (id)refreshDates;
- (void)removeRefreshDates;
- (_Bool)_loadDataWithError:(id *)arg1;
- (_Bool)_saveDataWithError:(id *)arg1;
- (void)_addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (void)_removeRefreshDateWithIdentifier:(id)arg1;
- (void)_removeData;

@end
