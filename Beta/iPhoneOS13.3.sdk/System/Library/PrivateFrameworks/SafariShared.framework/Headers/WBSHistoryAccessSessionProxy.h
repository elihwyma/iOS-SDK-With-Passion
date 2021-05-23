/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSHistoryConnectionProxy;

@protocol OS_dispatch_queue, WBSHistoryAccessSessionProtocol;

@interface WBSHistoryAccessSessionProxy : NSObject

{
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id <WBSHistoryAccessSessionProtocol> _historyAccessSession;
    NSObject<OS_dispatch_queue> *_historyAccessSessionAccessQueue;
}

- (id)init;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_getHistoryAccessSessionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
