/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (_Bool)protectedDataAvailable;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (_Bool)supportsJournaling;

@end
