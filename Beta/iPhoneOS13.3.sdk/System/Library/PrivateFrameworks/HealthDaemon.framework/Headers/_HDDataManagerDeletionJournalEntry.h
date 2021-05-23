/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataDeletionConfiguration;

@protocol HKUUIDCollection;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry

{
    id <HKUUIDCollection> _UUIDCollection;
    HDDataDeletionConfiguration *_configuration;
}

@property (nonatomic, readonly) id <HKUUIDCollection> UUIDCollection;
@property (copy, nonatomic, readonly) HDDataDeletionConfiguration *configuration;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2;

@end
