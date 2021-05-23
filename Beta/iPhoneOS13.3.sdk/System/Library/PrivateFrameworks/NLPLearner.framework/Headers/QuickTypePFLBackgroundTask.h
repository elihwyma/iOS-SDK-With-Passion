/*
 Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

#import <MLBackgroundTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLBackgroundTask : MLBackgroundTask

{
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)activityForScheduling;

@end
