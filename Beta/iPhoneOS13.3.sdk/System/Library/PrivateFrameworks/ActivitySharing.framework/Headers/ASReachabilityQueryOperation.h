/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSOperation.h>

@class ASReachabilityStatusCache, IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ASReachabilityQueryOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    NSSet *_destinations;
    NSMutableSet *_remainingDestinations;
    IDSBatchIDQueryController *_batchQueryController;
    NSObject<OS_dispatch_source> *timer;
    NSMutableDictionary *_rawIDSDestinationToOriginalDestination;
    NSMutableDictionary *_results;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    ASReachabilityStatusCache *_statusCache;
    NSString *_serviceIdentifier;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (weak, nonatomic) ASReachabilityStatusCache *statusCache;
@property (copy, nonatomic) NSSet *destinations;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)_queryTimedOut;

@end
