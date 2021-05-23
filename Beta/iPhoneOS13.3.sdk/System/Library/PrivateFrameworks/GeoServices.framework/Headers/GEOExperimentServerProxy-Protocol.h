/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOABAssignmentResponse;

@protocol GEOExperimentServerProxyDelegate;

@protocol GEOExperimentServerProxy <Swift>

@property (weak, nonatomic) id <GEOExperimentServerProxyDelegate> delegate;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;

- (unsigned short)initWithDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)forceUpdate;
- (unsigned short)abAssignUUIDWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshDatasetABStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)abAssignUUIDWithSyncCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_debug_setQuerySubstring:forExperimentType:dispatcherRequestType: /* Error: Ran out of types for this method. */;
- (unsigned short)_debug_setActiveExperimentBranchDictionaryRepresentation: /* Error: Ran out of types for this method. */;
- (unsigned short)_debug_setBucketIdDictionaryRepresentation: /* Error: Ran out of types for this method. */;
- (unsigned short)_debug_fetchAllAvailableExperiments: /* Error: Ran out of types for this method. */;

@end
