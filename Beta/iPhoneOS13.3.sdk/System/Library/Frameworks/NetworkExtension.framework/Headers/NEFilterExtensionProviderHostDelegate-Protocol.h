/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/Swift-Protocol.h>

@protocol NEFilterExtensionProviderHostDelegate <Swift>

- (unsigned short)notifyRulesChanged;
- (unsigned short)provideRemediationMap: /* Error: Ran out of types for this method. */;
- (unsigned short)provideURLAppendStringMap: /* Error: Ran out of types for this method. */;
- (unsigned short)report: /* Error: Ran out of types for this method. */;
- (unsigned short)sendBrowserContentFilterServerRequest;
- (unsigned short)sendSocketContentFilterRequest;
- (unsigned short)fetchCurrentRulesForFlow:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)applySettings:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createPacketChannelForExtension:completionHandler: /* Error: Ran out of types for this method. */;

@end
