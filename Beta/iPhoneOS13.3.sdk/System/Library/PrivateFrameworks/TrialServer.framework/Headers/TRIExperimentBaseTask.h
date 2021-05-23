/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@class NSString;

@interface TRIExperimentBaseTask

{
    struct NSString *_experimentId;
}

@property (readonly) NSString *experimentId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tags;
- (id)metrics;
- (id)initWithExperimentId:(struct NSString *)arg1;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)projectIdForExperiment;

@end
