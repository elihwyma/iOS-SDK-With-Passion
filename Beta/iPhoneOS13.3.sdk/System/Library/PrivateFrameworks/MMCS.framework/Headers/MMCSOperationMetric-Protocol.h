/*
 Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

#import <MMCS/Swift-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet;

@protocol MMCSOperationMetric <Swift>

@property (readonly) NSDate *startDate;
@property (readonly) double duration;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (readonly) NSMutableDictionary *totalBytesByChunkProfile;
@property (readonly) NSMutableDictionary *chunkCountByChunkProfile;
@property (readonly) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) NSMutableSet *requestUUIDs;
@property (readonly) NSArray *rangesCopy;

- (unsigned short)addRange: /* Error: Ran out of types for this method. */;
- (unsigned short)newRangeWithOperationState:startDate:duration: /* Error: Ran out of types for this method. */;

@end
