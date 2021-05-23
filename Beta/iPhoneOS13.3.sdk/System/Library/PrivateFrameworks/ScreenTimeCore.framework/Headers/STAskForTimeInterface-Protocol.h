/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/Swift-Protocol.h>

@protocol STAskForTimeInterface <Swift>

- (unsigned short)handleAnswer:requestIdentifier:timeApproved:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendAskForTimeRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)approveExceptionForRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLastResponseForRequestedResourceIdentifier:usageType:withCompletionHandler: /* Error: Ran out of types for this method. */;

@end
