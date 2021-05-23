/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKConversation, NSMutableArray, NSMutableDictionary;

@interface CKConversationList : NSObject

{
    NSMutableArray *_trackedConversations;
    _Bool _loadingConversations;
    _Bool _loadedConversations;
    _Bool _remergingConversations;
    _Bool _holdingWasKnownSenderUpdates;
    CKConversation *_pendingConversation;
    NSMutableDictionary *_conversationsDictionary;
    unsigned long long _filteredConversationCount;
}

@property (nonatomic) _Bool holdingWasKnownSenderUpdates;
@property (nonatomic) _Bool remergingConversations;
@property (nonatomic, readonly) _Bool loadingConversations;
@property (nonatomic, readonly) _Bool loadedConversations;
@property (retain, nonatomic) CKConversation *pendingConversation;
@property (retain, nonatomic) NSMutableDictionary *conversationsDictionary;
@property (nonatomic) unsigned long long filteredConversationCount;

+ (void)initialize;
+ (id)sharedConversationList;
+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (id)numberForFilterMode:(unsigned long long)arg1;
+ (id)stringForFilterMode:(unsigned long long)arg1;
+ (id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)resetCaches;
- (void)setNeedsReload;
- (id)conversations;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)removeConversation:(id)arg1;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(_Bool)arg3 create:(_Bool)arg4;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)_abChanged:(id)arg1;
- (void)_abPartialChanged:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)_handleChatsWillRemergeNotification:(id)arg1;
- (void)_handleChatsDidRemergeNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleMemoryWarning:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (void)_postConversationListChangedNotification;
- (void)stopTrackingConversation:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(_Bool)arg5 create:(_Bool)arg6;
- (_Bool)_messageFilteringEnabled;
- (_Bool)_shouldFilterForParticipants:(id)arg1;
- (void)resort;
- (_Bool)_shouldBailBeginTrackingForCurrentProcess;
- (id)conversationsForFilterMode:(unsigned long long)arg1;
- (_Bool)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2;
- (void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1;
- (_Bool)_shouldCleanupFilter;
- (void)_setConversations:(id)arg1 forFilterMode:(unsigned long long)arg2;
- (void)updateConversationFilteredFlagsAndReportSpam;
- (unsigned long long)filterModeForConversation:(id)arg1;
- (_Bool)_messageUnknownFilteringEnabled;
- (_Bool)_messageSpamFilteringEnabled;
- (_Bool)_messageIsFromFilteredSenderServiceIsSMS:(_Bool)arg1 lastMessageIsSMS:(_Bool)arg2 isContact:(_Bool)arg3 isFiltered:(_Bool)arg4 isSpam:(_Bool)arg5 unknownFilteringEnabled:(_Bool)arg6 smsSpamFilteringEnabled:(_Bool)arg7;
- (_Bool)_shouldShowInboxView;
- (void)_beginTrackingConversationWithChat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)conversationForExistingChatWithIMChatGroupID:(id)arg1;
- (id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (_Bool)hasActiveConversations;
- (id)topMostConversation;
- (void)unpendConversation;
- (long long)unreadCountForFilterMode:(unsigned long long)arg1;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (id)unreadLastMessages;
- (void)deleteConversation:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (id)pendingConversationCreatingIfNecessary;
- (id)_testingTrackedConversations;
- (void)updateConversationListsAndSortIfEnabled;
- (void)updateConversationsWasKnownSender;
- (_Bool)isHoldingWasKnownSenderUpdates;
- (void)beginWasKnownSenderHold;
- (void)releaseWasKnownSenderHold;

@end
