/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@protocol CKDOperationInfoDelegate <Swift>

@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (unsigned short)wasUnexpectedlyUnregisteredForOperationID: /* Error: Ran out of types for this method. */;
- (unsigned short)operationWithID:didProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)operationWithID:didComplete: /* Error: Ran out of types for this method. */;

@end
