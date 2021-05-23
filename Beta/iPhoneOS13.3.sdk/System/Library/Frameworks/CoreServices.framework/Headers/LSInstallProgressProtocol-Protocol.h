/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/Swift-Protocol.h>

@protocol LSInstallProgressProtocol <Swift>

- (unsigned short)addObserver;
- (unsigned short)_lsPing:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver;
- (unsigned short)sendNotification:forApplications:withPlugins: /* Error: Ran out of types for this method. */;
- (unsigned short)installationEndedForApplication:withState: /* Error: Ran out of types for this method. */;
- (unsigned short)createInstallProgressForApplication:withPhase:andPublishingString:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)installationFailedForApplication:reply: /* Error: Ran out of types for this method. */;

@end
