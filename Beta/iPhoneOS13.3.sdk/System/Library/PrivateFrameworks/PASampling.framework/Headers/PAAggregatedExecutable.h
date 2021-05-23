/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PAAggregatedTask.h>

@class NSMutableSet, NSString, NSUUID, PAExecutableAggregator;

@interface PAAggregatedExecutable : PAAggregatedTask

{
    unsigned long long _firstTimestampIndex;
    unsigned long long _lastTimestampIndex;
    NSString *_name;
    NSUUID *_mainBinaryUuid;
    unsigned int _count;
    NSMutableSet *_rootFrames;
}

@property (weak, readonly) PAExecutableAggregator *aggregator;
@property (readonly) NSUUID *mainBinaryUuid;
@property unsigned int count;
@property unsigned long long firstTimestampIndex;
@property unsigned long long lastTimestampIndex;
@property (retain) NSMutableSet *rootFrames;
@property (readonly) NSString *name;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (void)printBinaryImagesToOutputStream:(id)arg1;
- (void)printStacksToOutputStream:(id)arg1;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)copyDescriptionForFrame:(id)arg1;

@end
