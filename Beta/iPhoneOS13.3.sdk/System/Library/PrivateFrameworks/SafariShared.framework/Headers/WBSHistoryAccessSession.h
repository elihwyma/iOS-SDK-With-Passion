/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSHistoryService;

@protocol OS_dispatch_queue;

@interface WBSHistoryAccessSession : NSObject

{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHistoryService:(id)arg1;

@end
