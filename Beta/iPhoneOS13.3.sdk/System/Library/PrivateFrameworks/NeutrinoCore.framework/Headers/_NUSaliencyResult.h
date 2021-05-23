/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString, VNSaliencyImageObservation;

@protocol NURenderStatistics;

@interface _NUSaliencyResult : _NURenderResult

{
    VNSaliencyImageObservation *_observation;
}

@property (nonatomic, readonly) VNSaliencyImageObservation *observation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

- (id)initWithObservation:(id)arg1;

@end
