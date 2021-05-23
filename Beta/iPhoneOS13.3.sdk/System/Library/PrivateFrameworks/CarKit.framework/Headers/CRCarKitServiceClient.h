/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CRCarKitServiceClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)serviceQueue;

- (id)init;
- (void)dealloc;
- (void)_setupConnection;
- (void)_serviceQueuePerformBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)performSynchronousServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)performServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
