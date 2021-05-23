/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPDataBatch.h>

@class MLPNDArrayLossLabels, NSArray;

@interface MLPSeqDataBatch : MLPDataBatch

{
    NSArray *_matrix;
    MLPNDArrayLossLabels *_combinedLossLabels;
    unsigned long long _labelsCount;
}

@property (retain) NSArray *matrix;
@property (retain) MLPNDArrayLossLabels *combinedLossLabels;
@property unsigned long long labelsCount;

- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;

@end
