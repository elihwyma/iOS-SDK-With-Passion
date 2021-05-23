/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest

{
    NSMapTable *_requestsClassMapping;
}

- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (id)initWithSubrequests:(id)arg1;
- (id)originalRequestsOfClass:(Class)arg1;

@end
