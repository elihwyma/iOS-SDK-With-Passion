/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <AskPermission/Swift-Protocol.h>

@protocol ConnectionProtocol <Swift>

- (unsigned short)start;
- (unsigned short)addRequestWithURL:account:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)localApproveRequestWithItemIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRequestWithIdentifier:action:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAccountWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)presentProductPageWithTitle:body:approve:decline:itemIdentifier:previewURL: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveStorePushNotificationWithPayload: /* Error: Ran out of types for this method. */;

@end
