/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class MSPVectorTimestamp, NSData;

@protocol MSPReplicaRecord <Swift>

@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;

@end
