/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLBackgroundTask.h>

@class MLModelConfiguration, MLPredictionOptions, NSURL;

@interface MLBackgroundPredictionTask : MLBackgroundTask

{
    NSURL *_modelURL;
    MLModelConfiguration *_modelConfiguration;
    MLPredictionOptions *_predictionOptions;
}

@property (copy, nonatomic) NSURL *modelURL;
@property (copy, nonatomic) MLModelConfiguration *modelConfiguration;
@property (copy, nonatomic) MLPredictionOptions *predictionOptions;

+ (_Bool)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
