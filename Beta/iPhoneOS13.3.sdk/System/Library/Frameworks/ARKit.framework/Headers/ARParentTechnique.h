/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class ARTechniqueParallelGatherContext, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ARParentTechnique : ARTechnique

{
    _Bool _parallelExecution;
    NSObject<OS_dispatch_queue> *_queue;
    ARTechniqueParallelGatherContext *_previousContext;
    NSArray *__internalTechniques;
}

@property (copy) NSArray *techniques;
@property (copy) NSArray *_internalTechniques;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)techniquesByReplacingOriginalTechniques:(id)arg1 withReplacementTechniques:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)techinqueInArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)techniquesByForceReplacingTechniques:(id)arg1 withMatchingClassTechniques:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)prepare;
- (id)processData:(id)arg1;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (id)techniqueOfClass:(Class)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)setBonusLatency:(double)arg1;
- (id)initWithTechniques:(id)arg1 delegate:(id)arg2;
- (void)_submitResultsForTimestamp:(double)arg1 context:(id)arg2;
- (void)reuseTechniques:(id)arg1;

@end
