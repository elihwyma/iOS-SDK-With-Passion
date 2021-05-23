/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface DASharedCalendarContext : NSObject

{
    _Bool _shouldSyncCalendar;
    NSString *_calendarID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) NSString *calendarID;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic) _Bool shouldSyncCalendar;

- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
