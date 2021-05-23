/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class CLLocation, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver : RESingleton

{
    NSXPCConnection *_connection;
    CLLocation *_location;
    long long _connectionWindowRetainCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (void)_queue_setupConnection;
- (void)_queue_setLocation:(id)arg1;
- (void)_queue_clearConnection;

@end
