/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDatabaseTransactionContext.h>

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) _Bool skipJournalMerge;
@property (nonatomic) _Bool requiresNewDatabaseConnection;
@property (nonatomic) long long journalType;
@property (nonatomic) long long cacheScope;
@property (nonatomic) _Bool requiresWrite;
@property (nonatomic) _Bool requiresProtectedData;
@property (nonatomic) _Bool highPriority;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAccessibilityAssertion:(id)arg1;

@end
