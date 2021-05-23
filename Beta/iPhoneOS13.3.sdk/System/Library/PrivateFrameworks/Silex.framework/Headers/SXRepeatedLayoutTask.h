/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXLayoutTask.h>

@interface SXRepeatedLayoutTask : SXLayoutTask

{
    unsigned long long _repeatCount;
    double _elapsedDuration;
}

@property (nonatomic, readonly) unsigned long long repeatCount;
@property (nonatomic, readonly) double elapsedDuration;

- (id)initWithTask:(id)arg1 result:(id)arg2;

@end
