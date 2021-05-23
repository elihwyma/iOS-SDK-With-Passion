/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <ControlCenterServices/Swift-Protocol.h>

@protocol CCSRemoteServiceServerProtocol <Swift>

- (unsigned short)requestEnableModuleWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAvailableModuleIdentifiersWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getEnabledStateOfModuleWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentModuleWithIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;

@end
