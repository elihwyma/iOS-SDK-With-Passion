/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSString;

@interface NNMKSyncedMessage : NSObject

{
    _Bool _usedProtectedChannelForMessageSync;
    _Bool _usedNotificationPriorityForMessageSync;
    _Bool _contentSyncedUsingNotificationPriority;
    _Bool _contentSyncedBecauseUserRequested;
    _Bool _contentSynced;
    _Bool _contentRequestedByUser;
    _Bool _resendRequested;
    _Bool _isThreadSpecific;
    NSString *_messageId;
    NSString *_sanitizedMessageId;
    unsigned long long _status;
    unsigned long long _statusVersion;
    NSDate *_dateReceived;
    NSMutableSet *_attachmentsContentIdsNotYetSynced;
    NSString *_conversationId;
    unsigned long long _resendInterval;
    unsigned long long _contentResendInterval;
    NSString *_mailboxId;
    unsigned long long _isSpecialMailboxSpecific;
}

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *sanitizedMessageId;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long statusVersion;
@property (retain, nonatomic) NSDate *dateReceived;
@property (nonatomic) _Bool usedProtectedChannelForMessageSync;
@property (nonatomic) _Bool usedNotificationPriorityForMessageSync;
@property (nonatomic) _Bool contentSyncedUsingNotificationPriority;
@property (nonatomic) _Bool contentSyncedBecauseUserRequested;
@property (nonatomic) _Bool contentSynced;
@property (nonatomic) _Bool contentRequestedByUser;
@property (retain, nonatomic) NSMutableSet *attachmentsContentIdsNotYetSynced;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) _Bool resendRequested;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) unsigned long long contentResendInterval;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool isThreadSpecific;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;

- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 useDefaultMailbox:(_Bool)arg2;
- (_Bool)isContentCompletelySynced;

@end
