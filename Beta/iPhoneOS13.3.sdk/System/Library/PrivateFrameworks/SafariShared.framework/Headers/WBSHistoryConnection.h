/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class WBSHistoryService;

@interface WBSHistoryConnection : NSObject <Swift>

{
    WBSHistoryService *_historyService;
}

- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;
- (id)initWithHistoryService:(id)arg1;
- (void)beginHistoryAccessSession:(CDUnknownBlockType)arg1;
- (void)getServiceInfo:(CDUnknownBlockType)arg1;
- (void)beginURLCompletionSession:(CDUnknownBlockType)arg1;
- (void)getVisitedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)debugGetDatabaseURLWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
