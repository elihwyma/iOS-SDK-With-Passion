/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray, NSUUID;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry

{
    NSUUID *_seriesIdentifier;
    NSArray *_data;
}

@property (nonatomic, readonly) NSUUID *seriesIdentifier;
@property (nonatomic, readonly) NSArray *data;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2;

@end
