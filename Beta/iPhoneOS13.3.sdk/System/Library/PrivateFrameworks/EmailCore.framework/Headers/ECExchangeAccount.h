/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@class NSDate, NSString;

@interface ECExchangeAccount

@property (copy, nonatomic) NSString *inboxMailboxName;
@property (copy, nonatomic) NSString *journalMailboxName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *folderHierarchySyncState;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;

@end
