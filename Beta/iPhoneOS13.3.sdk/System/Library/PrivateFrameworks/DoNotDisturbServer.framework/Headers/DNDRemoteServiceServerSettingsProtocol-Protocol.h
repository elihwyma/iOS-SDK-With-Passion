/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDRemoteServiceServerSettingsProtocol <Swift>

- (unsigned short)getBehaviorSettingsWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBehaviorSettings:withRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhoneCallBypassSettingsWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPhoneCallBypassSettings:withRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getScheduleSettingsWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setScheduleSettings:withRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForSettingsUpdatesWithRequestDetails:completionHandler: /* Error: Ran out of types for this method. */;

@end
