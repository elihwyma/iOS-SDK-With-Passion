/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class MISSING_TYPE, NSDictionary;

@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@protocol TUConversationManagerDataSource <Swift>

@property (copy, nonatomic, readonly) NSDictionary *conversationsByGroupUUID;
@property (weak, nonatomic) id <TUConversationManagerDataSourceDelegate> delegate;
@property (weak, nonatomic) id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate;

- (MISSING_TYPE *)invalidate;
- (MISSING_TYPE *)updateConversationWithUUID:participantPresentationContexts: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)registerWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addRemoteMembers:toConversation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)buzzMember:conversation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setDownlinkMuted:forRemoteParticipantsInConversation: /* Error: Ran out of types for this method. */;

@end
