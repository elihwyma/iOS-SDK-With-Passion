/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject

{
    NSMutableDictionary *_refreshDateMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *refreshDateMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)refreshDateWithIdentifier:(id)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (id)refreshDates;
- (void)removeRefreshDates;

@end
