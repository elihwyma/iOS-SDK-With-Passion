/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface VNRequestForensics : NSObject

{
    NSArray *_originalRequests;
    NSArray *_orderedRequests;
    NSMutableArray *_implicitRequests;
    NSMutableArray *_performedRequests;
    NSMutableArray *_cachedRequestResults;
    NSMutableArray *_checkedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_locatedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_ledger;
    NSMapTable *_requestToHumanReadableLabelMap;
}

@property (copy, nonatomic) NSArray *orderedRequests;
@property (copy, nonatomic, readonly) NSArray *originalRequests;
@property (copy, nonatomic, readonly) NSArray *performedRequests;

- (id)description;
- (id)_humanReadableLabelForRequest:(id)arg1;
- (id)initWithOriginalRequests:(id)arg1;
- (void)performingOrderedDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2;
- (void)performingRequest:(id)arg1;
- (void)performedRequest:(id)arg1 withError:(id)arg2;
- (void)request:(id)arg1 cachedResultsWithObservationsCacheKey:(id)arg2;
- (void)cachedObservationsWithKey:(id)arg1 wereCheckedOnBehalfOfRequest:(id)arg2;
- (void)cachedObservationsWithKey:(id)arg1 wereLocatedOnBehalfOfRequest:(id)arg2;
- (id)keyUsedToCacheResultsOfRequest:(id)arg1;
- (id)requestsThatLookedUpCachedResultsKey:(id)arg1;
- (id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg1;
- (id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg1;
- (id)requestThatProvidedObservationsForRequest:(id)arg1;
- (_Bool)resultsObtainedFromObservationsCacheForRequest:(id)arg1;

@end
