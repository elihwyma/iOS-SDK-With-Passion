/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDServer, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDActionOperationEngine : NSObject

{
    FPDServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

- (id)init;
- (id)initWithServer:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)inFlightOperations;

@end
