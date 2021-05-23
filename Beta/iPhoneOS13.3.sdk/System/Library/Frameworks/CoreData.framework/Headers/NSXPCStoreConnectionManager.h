/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnectionManager : NSObject

{
    NSMutableArray *_availableConnections;
    NSMutableArray *_allConnections;
    unsigned long long _maxConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    int _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (nonatomic, readonly) unsigned long long maxConnections;
@property (nonatomic, readonly) NSArray *availableConnections;

- (void)dealloc;
- (id)initForStore:(id)arg1;
- (void)disconnectAllConnections;
- (void)sendMessageWithContext:(id)arg1;
- (void)_checkinConnection:(id)arg1;
- (id)_checkoutConnection;

@end
