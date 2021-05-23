/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMailbox.h>

@class EMMailboxScope;

@interface EMSmartMailbox : EMMailbox

{
    CDUnknownBlockType _predicateGenerator;
    EMMailboxScope *_mailboxScope;
    long long _smartMailboxType;
}

@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) long long smartMailboxType;

+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3;
+ (id)vipMailboxWithMailboxScope:(id)arg1;
+ (id)flaggedMailboxWithMailboxScope:(id)arg1;
+ (id)unreadMailboxWithMailboxScope:(id)arg1;
+ (id)hasAttachmentsMailboxWithMailboxScope:(id)arg1;
+ (id)notifyThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)todayMailboxWithMailboxScope:(id)arg1;
+ (id)muteThreadsMailboxWithMailboxScope:(id)arg1;
+ (id)includesMeMailboxWithMailboxScope:(id)arg1;
+ (id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isSmartMailbox;
- (_Bool)supportsSelectAll;
- (_Bool)_shouldArchiveByDefault;
- (id)makePredicate;
- (id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 mailboxScope:(id)arg4 predicateGenerator:(CDUnknownBlockType)arg5;

@end
