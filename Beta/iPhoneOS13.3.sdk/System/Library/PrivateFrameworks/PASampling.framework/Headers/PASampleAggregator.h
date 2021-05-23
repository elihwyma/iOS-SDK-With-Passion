/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, PASampleAggregatorOptions, PASampleTimeSeriesDataStore;

@interface PASampleAggregator : NSObject

{
    PASampleAggregatorOptions *_options;
    PASampleTimeSeriesDataStore *_sampleStore;
    NSMutableSet *_tasks;
    NSMutableArray *_wallTimestamps;
    NSMutableArray *_machTimestamps;
    double _sampleIntervalLimit;
}

@property (retain) NSMutableSet *tasks;
@property (readonly) PASampleTimeSeriesDataStore *sampleStore;
@property (readonly) unsigned long long count;
@property (readonly) double sampleIntervalLimit;
@property (copy) PASampleAggregatorOptions *options;
@property _Bool displayHeader;
@property _Bool displayBody;
@property _Bool displayFooter;
@property _Bool tabDelineateBinaryImageSections;
@property _Bool binaryImagesBeforeStacks;
@property _Bool aggregateStacksByThread;
@property _Bool aggregateStacksByProcess;
@property _Bool displayFrameAddresses;
@property _Bool displaySub1MsCpuTime;
@property _Bool displayStateChangesOnIdleThreads;
@property _Bool displayOffsetsFromUnnamedSymbols;
@property _Bool displaySymbolInformation;
@property _Bool displayBinaryImageAddresses;
@property _Bool displayBinaryImagesLackingNameOrPath;
@property _Bool displayRunningThreads;
@property _Bool displayRunnableThreads;
@property _Bool displayBlockedThreads;
@property _Bool displayProcessFirstLastTimes;
@property _Bool displayIdleWorkQueueThreads;
@property _Bool displayAllBinaries;
@property _Bool displayBlockedReasons;
@property _Bool displayBlockedReasonsLackingProcessOwners;
@property _Bool displayAddressesInBlockedReasons;
@property _Bool displayEmptyBootArgs;
@property _Bool displayAllHIDEvents;
@property _Bool verbose;

- (void)setSamples:(id)arg1;
- (id)initWithSampleStore:(id)arg1;
- (void)printToStream:(struct __sFILE *)arg1;
- (void)printToMutableData:(id)arg1;
- (double)wallTimeAtTimestampIndex:(unsigned long long)arg1;
- (void)printDateToOutputStream:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (id)sortedTasks;
- (void)printFooterToOutputStream:(id)arg1;
- (void)_printToOutputStream:(id)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)setHeaderOnly:(_Bool)arg1;
- (double)machTimeAtTimestampIndex:(unsigned long long)arg1;
- (unsigned long long)firstTimestampIndexAfterWallTime:(double)arg1;
- (unsigned long long)firstTimestampIndexAfterMachTime:(double)arg1;

@end
