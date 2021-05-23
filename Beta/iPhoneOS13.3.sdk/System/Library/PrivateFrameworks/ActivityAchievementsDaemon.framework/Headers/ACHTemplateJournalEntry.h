/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <HDJournalEntry.h>

@class ACHTemplate;

@interface ACHTemplateJournalEntry : HDJournalEntry

{
    long long _action;
    ACHTemplate *_template;
    long long _provenance;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) ACHTemplate *template;
@property (nonatomic) long long provenance;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1 provenance:(long long)arg2 action:(long long)arg3;

@end
