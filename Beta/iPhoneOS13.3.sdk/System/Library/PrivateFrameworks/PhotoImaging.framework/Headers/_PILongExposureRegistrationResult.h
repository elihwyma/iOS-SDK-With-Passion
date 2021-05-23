/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString, VNImageHomographicAlignmentObservation;

@protocol NURenderStatistics;

@interface _PILongExposureRegistrationResult : _NURenderResult

{
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _extent;
}

@property (copy, nonatomic) VNImageHomographicAlignmentObservation *observation;
@property (nonatomic) CDStruct_996ac03c extent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
