/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject

{
    unsigned long long _lastTimestampIndex;
    PASampleThreadData *_sampleThread;
}

@property unsigned long long lastTimestampIndex;
@property (readonly) PASampleThreadData *sampleThread;

- (id)debugDescription;
- (id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end
