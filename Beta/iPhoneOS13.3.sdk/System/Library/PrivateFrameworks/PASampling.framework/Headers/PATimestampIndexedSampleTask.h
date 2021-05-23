/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject

{
    unsigned long long _lastTimestampIndex;
    PASampleTaskData *_sampleTask;
}

@property unsigned long long lastTimestampIndex;
@property (readonly) PASampleTaskData *sampleTask;

- (id)debugDescription;
- (id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end
