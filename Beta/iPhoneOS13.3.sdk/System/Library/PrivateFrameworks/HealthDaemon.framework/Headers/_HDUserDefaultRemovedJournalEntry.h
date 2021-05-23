/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry

{
    NSString *_key;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
