/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class MSPPosition, MSPVectorTimestamp;

@protocol MSPOrderedReplicaRecord <Swift>

@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;

@end
