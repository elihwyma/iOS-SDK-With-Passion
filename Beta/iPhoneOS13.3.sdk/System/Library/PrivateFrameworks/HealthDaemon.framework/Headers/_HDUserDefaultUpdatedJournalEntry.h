/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HDUserDefault;

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry

{
    HDUserDefault *_userDefault;
}

@property (nonatomic, readonly) HDUserDefault *userDefault;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
