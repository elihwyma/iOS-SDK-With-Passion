/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry

{
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

@property (nonatomic, readonly) HKObject *dataObject;
@property (nonatomic, readonly) HDDataOriginProvenance *provenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 provenance:(id)arg2;

@end
