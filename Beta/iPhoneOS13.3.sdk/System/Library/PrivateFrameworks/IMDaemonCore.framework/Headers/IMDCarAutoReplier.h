/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class CARAutomaticDNDStatus, NSMutableDictionary, NSString;

@protocol IMDAutoReplyDelegate, OS_dispatch_queue;

@interface IMDCarAutoReplier : NSObject

{
    id <IMDAutoReplyDelegate> _replyDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    NSMutableDictionary *_propertiesForChatIdentifiers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus;
@property (nonatomic, readonly) NSMutableDictionary *propertiesForChatIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <IMDAutoReplyDelegate> replyDelegate;

- (id)init;
- (void)dealloc;
- (_Bool)_isActive;
- (void)_updateDNDStatus;
- (_Bool)_favoritesContainsParticipants:(id)arg1;
- (_Bool)_hasRecentOutgoingMessagesInChat:(id)arg1;
- (_Bool)_contactsContainsParticipants:(id)arg1;
- (unsigned long long)_autoReplyAudiencePreference;
- (_Bool)_urgentTriggerMatchInText:(id)arg1;
- (id)_propertiesForChat:(id)arg1;
- (_Bool)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2;
- (id)_customizedAutoReplyMessage;
- (void)_handleGeneratedAutoReplyText:(id)arg1 forChat:(id)arg2;
- (void)_handleReceivedUrgentRequestForMessages:(id)arg1;
- (void)processMessages:(id)arg1 inChat:(id)arg2;

@end
