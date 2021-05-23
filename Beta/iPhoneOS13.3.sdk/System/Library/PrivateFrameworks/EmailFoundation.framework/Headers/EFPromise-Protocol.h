/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/Swift-Protocol.h>

@protocol EFObserver;

@protocol EFPromise <Swift>

@property (readonly) CDUnknownBlockType completionHandlerAdapter;
@property (readonly) CDUnknownBlockType boolErrorCompletionHandlerAdapter;
@property (readonly) CDUnknownBlockType errorOnlyCompletionHandlerAdapter;
@property (readonly) id <EFObserver> firstResultObserverAdapter;
@property (readonly) id <EFObserver> resultsObserverAdapter;

- (unsigned short)finishWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)finishWithResult:error: /* Error: Ran out of types for this method. */;
- (unsigned short)finishWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)finishWithFuture: /* Error: Ran out of types for this method. */;

@end
