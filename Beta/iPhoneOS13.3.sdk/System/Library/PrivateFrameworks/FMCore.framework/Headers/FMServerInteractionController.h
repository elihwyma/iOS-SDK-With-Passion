/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject

{
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (double)_simulatedLatency;
- (void)processResponseForCommand:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)networkActivityStatus:(_Bool)arg1;
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelCommand:(id)arg1;
- (void)cancelAllCommands;

@end
