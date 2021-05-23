/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/Swift-Protocol.h>

@protocol EFFutureDelegate;

@protocol EFFuture <Swift>

@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) id resultIfAvailable;
@property (weak) id <EFFutureDelegate> delegate;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (unsigned short)then: /* Error: Ran out of types for this method. */;
- (unsigned short)resultBeforeDate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)result: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuccessBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addFailureBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)recover: /* Error: Ran out of types for this method. */;
- (unsigned short)resultWithTimeout:error: /* Error: Ran out of types for this method. */;
- (unsigned short)map: /* Error: Ran out of types for this method. */;
- (unsigned short)onScheduler:addSuccessBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)onScheduler:addFailureBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)always: /* Error: Ran out of types for this method. */;
- (unsigned short)resultIfAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)tryCancel;
- (unsigned short)onScheduler:always: /* Error: Ran out of types for this method. */;
- (unsigned short)onScheduler:then: /* Error: Ran out of types for this method. */;
- (unsigned short)onScheduler:recover: /* Error: Ran out of types for this method. */;
- (unsigned short)onScheduler:map: /* Error: Ran out of types for this method. */;

@end
