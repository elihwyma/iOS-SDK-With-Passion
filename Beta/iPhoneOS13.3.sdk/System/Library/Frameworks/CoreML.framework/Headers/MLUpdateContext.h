/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModel, MLUpdateTask, NSDictionary, NSError;

@protocol MLWritable;

@interface MLUpdateContext : NSObject

{
    MLUpdateTask *_task;
    MLModel<MLWritable> *_model;
    long long _event;
    NSDictionary *_metrics;
    NSDictionary *_parameters;
    NSError *_error;
}

@property (retain, nonatomic) MLUpdateTask *task;
@property (retain, nonatomic) MLModel<MLWritable> *model;
@property (nonatomic) long long event;
@property (retain, nonatomic) NSDictionary *metrics;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSError *error;

+ (id)updateContextWithTask:(id)arg1 model:(id)arg2 event:(long long)arg3 metrics:(id)arg4 parameters:(id)arg5;
+ (id)updateContextForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4;

- (id)description;

@end
