/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/Swift-Protocol.h>

@protocol STKUSSDSessionCommunication <Swift>

- (unsigned short)dismissCoalescingSession;
- (unsigned short)sessionDidReceiveString: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionWantsResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidReceiveErrorCode:string: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionDidTerminate;
- (unsigned short)sessionDidReceiveSupplementaryServicesEvent: /* Error: Ran out of types for this method. */;

@end
