/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PASampleAggregator, PASampleTimeSeriesDataStore;

@interface PAAggregatedTask : NSObject

{
    PASampleAggregator *_aggregator;
    NSMutableDictionary *_binaryImages;
}

@property (weak, readonly) PASampleTimeSeriesDataStore *sampleStore;

- (long long)compare:(id)arg1;
- (id)aggregator;
- (void)printToOutputStream:(id)arg1;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)fillGaps;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 isKernel:(_Bool)arg2;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(_Bool)arg2 isKernel:(_Bool)arg3;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(_Bool)arg4 isKernel:(_Bool)arg5;
- (void)updateBinaryLocationIfLower:(id)arg1 isKernel:(_Bool)arg2;
- (void)printBinaryImagesToOutputStream:(id)arg1;

@end
