/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/Swift-Protocol.h>

@protocol CNFuture <Swift>

@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

- (unsigned short)cancel;
- (unsigned short)resultBeforeDate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)result: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuccessBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addFailureBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)recover: /* Error: Ran out of types for this method. */;
- (unsigned short)flatMap: /* Error: Ran out of types for this method. */;
- (unsigned short)resultWithTimeout:error: /* Error: Ran out of types for this method. */;
- (unsigned short)addSuccessBlock:scheduler: /* Error: Ran out of types for this method. */;
- (unsigned short)addFailureBlock:scheduler: /* Error: Ran out of types for this method. */;

@end
