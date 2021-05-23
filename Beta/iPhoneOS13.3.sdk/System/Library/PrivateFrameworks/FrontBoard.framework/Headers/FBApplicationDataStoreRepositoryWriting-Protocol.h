/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@protocol FBApplicationDataStoreRepositoryWriting <Swift>

- (unsigned short)flushSynchronously;
- (unsigned short)setObject:forKey:forApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObjectForKey:forApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllObjectsForApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObjectsForKeys:forApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)beginBatchedUpdate;
- (unsigned short)endBatchedUpdate;

@end
