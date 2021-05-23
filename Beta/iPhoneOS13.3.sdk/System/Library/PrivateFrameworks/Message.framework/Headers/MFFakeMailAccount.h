/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MailAccount.h>

@class DeliveryAccount, MFIMAPConnection, NSMutableDictionary, NSURL;

@interface MFFakeMailAccount : MailAccount

{
    NSURL *_URL;
    MFIMAPConnection *_cachedConnection;
    NSMutableDictionary *_mailboxes;
    _Bool _managed;
    DeliveryAccount *_deliveryAccount;
}

@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (nonatomic, getter=isManaged) _Bool managed;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (id)initWithURL:(id)arg1;
- (_Bool)isActive;
- (id)uniqueID;
- (id)displayName;
- (id)hostname;
- (id)username;
- (int)cachePolicy;
- (id)_URLScheme;
- (Class)storeClass;
- (_Bool)supportsRemoteAppend;
- (_Bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(_Bool)arg2;
- (_Bool)_shouldConfigureMailboxCache;
- (id)_mailboxPathPrefix;
- (_Bool)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id *)arg3;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (_Bool)supportsFastRemoteBodySearch;
- (id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2;
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (id)_nameForMailboxUid:(id)arg1;
- (unsigned int)minID;
- (void)setCachedConnection:(id)arg1;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 failedToSelectMailbox:(_Bool *)arg4;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned int)arg2 connectTime:(double)arg3;

@end
