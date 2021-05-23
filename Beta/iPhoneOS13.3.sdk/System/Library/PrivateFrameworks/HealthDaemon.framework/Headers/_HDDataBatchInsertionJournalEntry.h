/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry

{
    HDCodableObjectCollection *_collection;
    HDDataOriginProvenance *_provenance;
}

@property (nonatomic, readonly) HDCodableObjectCollection *collection;
@property (nonatomic, readonly) HDDataOriginProvenance *provenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2;

@end
