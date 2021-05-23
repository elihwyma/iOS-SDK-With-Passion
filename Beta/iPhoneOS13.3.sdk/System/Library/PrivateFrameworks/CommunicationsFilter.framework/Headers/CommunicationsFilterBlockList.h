/*
 Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import <Foundation/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockList : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_disconnected;
- (_Bool)_disconnect;
- (_Bool)_connect;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addItemForAllServices:(id)arg1;
- (void)removeItemForAllServices:(id)arg1;
- (id)copyAllItems;
- (_Bool)isItemInList:(id)arg1;

@end
