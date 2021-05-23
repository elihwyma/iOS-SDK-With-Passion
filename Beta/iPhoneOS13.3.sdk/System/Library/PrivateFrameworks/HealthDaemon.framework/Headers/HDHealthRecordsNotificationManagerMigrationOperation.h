/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@interface HDHealthRecordsNotificationManagerMigrationOperation : HDJournalableOperation

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
