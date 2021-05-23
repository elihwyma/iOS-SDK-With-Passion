/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDJournalableOperation : HDJournalEntry <Swift>

{
    _Bool _didJournal;
}

@property (nonatomic, readonly) _Bool didJournal;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)performOrJournalWithProfile:(id)arg1 error:(id *)arg2;

@end
