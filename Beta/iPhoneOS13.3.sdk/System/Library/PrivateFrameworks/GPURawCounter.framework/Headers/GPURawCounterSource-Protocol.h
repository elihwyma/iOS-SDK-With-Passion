/*
 Image: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
 */

#import <GPURawCounter/Swift-Protocol.h>

@class MISSING_TYPE, NSString;

@protocol GPURawCounterSource <Swift>

@property (readonly) NSString *name;

- (MISSING_TYPE *)setEnabled: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)availableCounters;
- (MISSING_TYPE *)requestCounters:firstErrorIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)ringBufferNum;
- (MISSING_TYPE *)ringBufferInfoAtIndex:base:size:dataOffset:dataSize: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)drainRingBufferAtIndex:dataSize: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)resetRawDataPostProcessor;
- (MISSING_TYPE *)postProcessRawDataWithSource:sourceSize:sourceRead:output:outputSize:outputWritten:isLast: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)pollCountersAtBufferIndex:withBlock: /* Error: Ran out of types for this method. */;

@end
