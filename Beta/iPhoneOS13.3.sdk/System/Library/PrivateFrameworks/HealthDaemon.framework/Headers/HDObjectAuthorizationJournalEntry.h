/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry

{
    NSArray *_records;
    double _modificationDate;
    long long _syncProvenance;
}

@property (retain, nonatomic) NSArray *records;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long syncProvenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
