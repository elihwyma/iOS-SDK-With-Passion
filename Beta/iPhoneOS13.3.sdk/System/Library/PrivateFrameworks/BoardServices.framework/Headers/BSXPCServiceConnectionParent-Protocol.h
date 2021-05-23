/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/Swift-Protocol.h>

@protocol BSXPCServiceConnectionParent <Swift>

@property (nonatomic, readonly, getter=_isInvalidated) _Bool _invalidated;
@property (nonatomic, readonly, getter=_isClientInvalidated) _Bool _clientInvalidated;

- (unsigned short)_invalidateChildConnection: /* Error: Ran out of types for this method. */;

@end
