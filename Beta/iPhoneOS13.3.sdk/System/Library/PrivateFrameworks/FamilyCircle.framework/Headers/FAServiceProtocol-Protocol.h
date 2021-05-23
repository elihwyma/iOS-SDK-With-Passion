/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/Swift-Protocol.h>

@protocol FAServiceProtocol <Swift>

- (unsigned short)launchiCloudFamilySettings;
- (unsigned short)fetchFamilyCircleWithExpectedDSIDs:signedInAccountShouldBeApprover:forceServerFetch:doNotFetchFromServer:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addFamilyMemberWithAppleID:password:isUnder13:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFamilyMemberWithDSID:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFamilyMemberPhotoWithDSID:hashedDSID:size:localFallback:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchFamilyPushNotificationWithPayload:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerPushToken:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFamilyCircleCacheWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveFamilyEventPushNotificationWithPayload:options:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFamilyMemberFlagWithDSID:flag:enabled:replyBlock: /* Error: Ran out of types for this method. */;

@end
