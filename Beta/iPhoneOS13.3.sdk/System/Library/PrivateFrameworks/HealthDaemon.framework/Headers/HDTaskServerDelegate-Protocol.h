/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDTaskServerDelegate <Swift>

- (unsigned short)addObserver:forTaskServerUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver:forTaskServerUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTaskServerObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)taskServerDidFinishInitialization: /* Error: Ran out of types for this method. */;
- (unsigned short)taskServerDidFailToInitializeForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)taskServerDidInvalidate: /* Error: Ran out of types for this method. */;
- (unsigned short)taskServerWithUUID: /* Error: Ran out of types for this method. */;

@end
