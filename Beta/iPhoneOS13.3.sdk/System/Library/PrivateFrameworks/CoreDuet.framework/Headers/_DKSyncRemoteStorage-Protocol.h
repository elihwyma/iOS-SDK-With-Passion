/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@protocol _DKSyncRemoteStorage

- (unsigned short)name;
- (unsigned short)start;
- (unsigned short)isAvailable;
- (unsigned short)transportType;
- (unsigned short)fetchSourceDeviceIDFromPeer:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelOutstandingOperations;

@end
