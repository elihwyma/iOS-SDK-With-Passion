/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataOriginProvenance, NSArray;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry

{
    NSArray *_samples;
    HDDataOriginProvenance *_provenance;
}

@property (copy, nonatomic, readonly) NSArray *samples;
@property (copy, nonatomic, readonly) HDDataOriginProvenance *provenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodableDeletedSamples:(id)arg1 provenance:(id)arg2;

@end
