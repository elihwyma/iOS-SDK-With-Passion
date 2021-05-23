/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@class NSDate;

@interface ECIMAPAccount

{
    NSDate *_dateOfLastSync;
}

@property (nonatomic) _Bool compactWhenClosingMailboxes;
@property (nonatomic) long long daysBetweenSyncs;
@property (copy, nonatomic) NSDate *dateOfLastSync;
@property (nonatomic) _Bool queriedUserToSetPathPrefix;
@property (nonatomic) _Bool shouldUseGmailLabelStores;
@property (nonatomic, readonly) _Bool shouldUseGmailLabelStoresIsSet;
@property (nonatomic) _Bool needsGmailLablesCleanup;
@property (nonatomic) _Bool hasServerDefinedAllMailMailbox;
@property (nonatomic) _Bool hasServerDefinedArchiveMailbox;
@property (nonatomic) _Bool hasServerDefinedDraftsMailbox;
@property (nonatomic) _Bool hasServerDefinedJunkMailbox;
@property (nonatomic) _Bool hasServerDefinedSentMailbox;
@property (nonatomic) _Bool hasServerDefinedTrashMailbox;
@property (nonatomic) _Bool ignoreServerDefinedArchiveMailbox;
@property (nonatomic) _Bool ignoreServerDefinedDraftsMailbox;
@property (nonatomic) _Bool ignoreServerDefinedJunkMailbox;
@property (nonatomic) _Bool ignoreServerDefinedSentMailbox;
@property (nonatomic) _Bool ignoreServerDefinedTrashMailbox;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (id)_hostnameFromParentAccount:(id)arg1;
- (id)portNumberObject;
- (id)usesSSLObject;
- (void)clearDaysBetweenSyncs;
- (void)clearQueriedUserToSetPathPrefix;

@end
