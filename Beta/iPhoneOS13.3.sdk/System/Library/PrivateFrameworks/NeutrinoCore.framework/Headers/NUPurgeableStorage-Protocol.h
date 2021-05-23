/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@protocol NUPurgeableStorage <Swift>

- (unsigned short)isPurgeable;
- (unsigned short)isPurged;
- (unsigned short)makeNonPurgeable;
- (unsigned short)makePurgeable;
- (unsigned short)purgeLevel;
- (unsigned short)adjustPurgeLevel: /* Error: Ran out of types for this method. */;

@end
