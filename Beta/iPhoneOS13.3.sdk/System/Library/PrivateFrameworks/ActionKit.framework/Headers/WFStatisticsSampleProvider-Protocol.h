/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/Swift-Protocol.h>

@class NSArray;

@protocol WFStatisticsSampleProvider <Swift>

@property (nonatomic, readonly) _Bool canProvideDataSamples;
@property (nonatomic, readonly) NSArray *dataSamples;

- (unsigned short)updateValue:fromStatisticsOperation: /* Error: Ran out of types for this method. */;

@end
