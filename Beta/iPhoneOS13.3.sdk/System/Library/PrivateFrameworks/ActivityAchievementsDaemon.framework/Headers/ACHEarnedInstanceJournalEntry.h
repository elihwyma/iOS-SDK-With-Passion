/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <HDJournalEntry.h>

@class ACHEarnedInstance;

@interface ACHEarnedInstanceJournalEntry : HDJournalEntry

{
    long long _action;
    ACHEarnedInstance *_earnedInstance;
    long long _persistentID;
    long long _provenance;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) ACHEarnedInstance *earnedInstance;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long provenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarnedInstance:(id)arg1 provenance:(long long)arg2 action:(long long)arg3;

@end
