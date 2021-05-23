/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@protocol WBSCyclerTestSuite <Swift>

@property (nonatomic, readonly, getter=isFinished) _Bool finished;

- (unsigned short)init;
- (unsigned short)runWithTarget:completionHandler: /* Error: Ran out of types for this method. */;

+ (unsigned short)setValue:forConfigurationKey: /* Error: Ran out of types for this method. */;

- (unsigned short)isFinished;
- (unsigned short)canHandleRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)tearDown;
- (unsigned short)setUp;
- (unsigned short)handleRequest:withTarget:completionHandler: /* Error: Ran out of types for this method. */;

@end
