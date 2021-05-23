/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest

{
    NSMapTable *_requestToObservationClassMap;
}

- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1;
- (id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2;
- (id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2;

@end
