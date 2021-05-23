/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

{
    struct NSString *_treatmentId;
}

@property (readonly) NSString *treatmentId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (id)initWithExperimentId:(struct NSString *)arg1 treatmentId:(struct NSString *)arg2;

@end
