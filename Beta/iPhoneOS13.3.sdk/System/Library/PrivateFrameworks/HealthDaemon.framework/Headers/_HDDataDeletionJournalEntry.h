/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry

{
    _Bool _restrictSource;
    HKObject *_dataObject;
}

@property (nonatomic, readonly) HKObject *dataObject;
@property (nonatomic, readonly) _Bool restrictSource;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 restrictSource:(_Bool)arg2;

@end
