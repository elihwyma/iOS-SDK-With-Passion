/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/Swift-Protocol.h>

@protocol CLIntersiloServiceProtocol <Swift>

+ (unsigned short)isSupported;
+ (unsigned short)getSilo;
+ (unsigned short)becameFatallyBlocked:index: /* Error: Ran out of types for this method. */;
+ (unsigned short)performSyncOnSilo:invoker: /* Error: Ran out of types for this method. */;

@end
