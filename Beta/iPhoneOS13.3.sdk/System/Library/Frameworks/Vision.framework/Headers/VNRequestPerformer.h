/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject

{
    NSLock *_requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}

- (id)init;
- (void)dealloc;
- (void)cancelAllRequests;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (id)trackerWithOptions:(id)arg1 error:(id *)arg2;
- (void)releaseTracker:(id)arg1;
- (_Bool)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;
- (id)_dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
- (id)_orderedRequestsForRequests:(id)arg1;
- (_Bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (id)previousSequencedObservationsForRequest:(id)arg1;

@end
