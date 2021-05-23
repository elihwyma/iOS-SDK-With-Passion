/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/Swift-Protocol.h>

@protocol PFLoggerBackend <Swift>

@property (nonatomic, readonly) _Bool allowsConcurrentAccess;
@property (nonatomic, readonly) _Bool formatsMessage;
@property (nonatomic, readonly) _Bool outputsToDebuggerConsole;

- (unsigned short)flushWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)logFromCodeLocation:facility:subsystem:level:message:format:args: /* Error: Ran out of types for this method. */;

@end
