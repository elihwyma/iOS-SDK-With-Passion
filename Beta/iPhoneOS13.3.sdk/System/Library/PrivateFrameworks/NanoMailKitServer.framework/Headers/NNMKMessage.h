/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface NNMKMessage : NSObject

{
    _Bool _isThreadSpecific;
    _Bool _replaceStandaloneNotification;
    NSString *_subject;
    NSDate *_dateReceived;
    NSString *_preview;
    unsigned long long _status;
    NSString *_messageId;
    NSString *_serverId;
    NSString *_accountId;
    NSString *_mailboxId;
    NSString *_conversationId;
    NSString *_from;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSDate *_dateSent;
    NSString *_messageIdHeader;
    NSString *_notificationMessageId;
    NSString *_publisherBulletinId;
    unsigned long long _source;
    unsigned long long _statusVersion;
    unsigned long long _isSpecialMailboxSpecific;
    unsigned long long _visibleStatus;
}

@property (nonatomic) unsigned long long visibleStatus;
@property (nonatomic) _Bool replaceStandaloneNotification;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *serverId;
@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *mailboxId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSString *messageIdHeader;
@property (copy, nonatomic) NSString *notificationMessageId;
@property (copy, nonatomic) NSString *publisherBulletinId;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long statusVersion;
@property (nonatomic) _Bool isThreadSpecific;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) unsigned long long status;

+ (_Bool)supportsSecureCoding;
+ (id)messageIdsFromMessages:(id)arg1;
+ (_Bool)checkStatus:(unsigned long long)arg1 stateToCheck:(unsigned long long)arg2;
+ (unsigned long long)removeState:(unsigned long long)arg1 fromStatus:(unsigned long long)arg2;
+ (unsigned long long)addState:(unsigned long long)arg1 toStatus:(unsigned long long)arg2;
+ (_Bool)messageHasMultipleRecipients:(id)arg1;
+ (_Bool)isMessageURL:(id)arg1;
+ (id)URLForMessageId:(id)arg1;
+ (id)URLForMessageId:(id)arg1 attachmentID:(id)arg2;
+ (id)messageIdForURL:(id)arg1;
+ (id)attachmentIdForURL:(id)arg1;
+ (id)generateMessageHashForMessage:(id)arg1;
+ (id)generateNotificationIdWithFolderId:(id)arg1 remoteId:(id)arg2;
+ (id)generateConversationIdWithAccountId:(id)arg1 conversationId:(id)arg2;
+ (id)serverIdsFromMessages:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addState:(unsigned long long)arg1;
- (void)removeState:(unsigned long long)arg1;
- (_Bool)checkState:(unsigned long long)arg1;
- (_Bool)isFromSource:(unsigned long long)arg1;

@end
