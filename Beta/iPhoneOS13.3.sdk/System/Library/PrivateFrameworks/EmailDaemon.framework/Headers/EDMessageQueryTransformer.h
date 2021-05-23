/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMailboxPersistence, EDMessagePersistence;

@protocol EDAccountsProvider, EMVIPManager;

@interface EDMessageQueryTransformer : NSObject

{
    id <EDAccountsProvider> _accountsProvider;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessagePersistence *_messagePersistence;
    id <EMVIPManager> _vipManager;
}

@property (nonatomic, readonly) id <EDAccountsProvider> accountsProvider;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) id <EMVIPManager> vipManager;

- (id)initWithAccountsProvider:(id)arg1 mailboxPersistence:(id)arg2 messagePersistence:(id)arg3 vipManager:(id)arg4;
- (id)transformPredicate:(id)arg1;
- (id)transformCompoundPredicate:(id)arg1;
- (id)transformComparisonPredicate:(id)arg1;
- (id)transformSubpredicates:(id)arg1;
- (id)simplifyCompoundPredicate:(id)arg1;
- (id)simplifySingleSubpredicate:(id)arg1;
- (id)simplifyNotPredicate:(id)arg1;
- (id)simplifyAndPredicate:(id)arg1;
- (id)simplifyOrPredicate:(id)arg1;

@end
