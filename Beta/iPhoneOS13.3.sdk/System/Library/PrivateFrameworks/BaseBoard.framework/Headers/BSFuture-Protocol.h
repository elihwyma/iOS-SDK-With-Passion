/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/Swift-Protocol.h>

@protocol BSFuture <Swift>

@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (unsigned short)cancel;
- (unsigned short)resultBeforeDate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)result: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuccessBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addFailureBlock: /* Error: Ran out of types for this method. */;

@end
