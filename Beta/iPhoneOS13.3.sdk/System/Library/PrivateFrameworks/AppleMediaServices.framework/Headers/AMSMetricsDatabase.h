/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabase : NSObject

{
    NSString *_containerId;
    AMSSQLiteConnection *_connection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _keepAliveCount;
}

@property (retain, nonatomic) AMSSQLiteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long keepAliveCount;
@property (retain, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (long long)countAllEventsWithLockKey:(id)arg1 error:(id *)arg2;
- (id)initWithContainerId:(id)arg1;
- (void)insertEvents:(id)arg1 error:(id *)arg2;
- (void)dropAllEventsWithLockKey:(id)arg1 error:(id *)arg2;
- (void)unlockAllEventsWithKey:(id)arg1 error:(id *)arg2;
- (void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(CDUnknownBlockType)arg3;
- (void)dropEvents:(id)arg1 error:(id *)arg2;
- (void)unlockEvents:(id)arg1 error:(id *)arg2;
- (id)lockAllEventsWithError:(id *)arg1;
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;
- (void)_performTransaction:(CDUnknownBlockType)arg1;
- (id)_lockedById;
- (void)enumerateTopicsWithLockKey:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
