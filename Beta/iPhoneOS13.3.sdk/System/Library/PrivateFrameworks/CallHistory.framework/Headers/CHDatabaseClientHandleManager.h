/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

__attribute__((visibility("hidden")))
@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable

{
    CallHistoryDBClientHandle *_databaseClientHandle;
}

@property (weak, nonatomic, readonly) CallHistoryDBClientHandle *databaseClientHandle;

+ (id)sharedInstance;

- (id)init;

@end
