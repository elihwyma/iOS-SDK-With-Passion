/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSDate;

@protocol MSPHistoryReplicaMergeOptions <Swift>

@property (readonly) NSDate *earliestKnownSyncDate;
@property (readonly) long long modificationDatePolicy;

- (unsigned short)initWithEarliestKnownSyncDate:modificationDatePolicy: /* Error: Ran out of types for this method. */;

@end
