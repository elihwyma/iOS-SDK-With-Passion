/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSArray, NSString;

@protocol NURenderStatistics;

@interface _NUSubjectDetectionResult : _NURenderResult

{
    NSArray *_observations;
}

@property (copy, nonatomic, readonly) NSArray *observations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

- (id)initWithObservations:(id)arg1;

@end
