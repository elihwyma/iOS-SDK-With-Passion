/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSDictionary, NSUUID;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry

{
    NSUUID *_seriesUUID;
    NSDictionary *_metadata;
    Class _seriesClass;
}

@property (copy, nonatomic, readonly) NSUUID *seriesUUID;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) Class seriesClass;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;

@end
