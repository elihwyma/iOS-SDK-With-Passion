/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry

{
    NSSet *_sourceIDs;
    NSSet *_types;
}

@property (copy, nonatomic) NSSet *sourceIDs;
@property (copy, nonatomic) NSSet *types;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIDs:(id)arg1 types:(id)arg2;

@end
