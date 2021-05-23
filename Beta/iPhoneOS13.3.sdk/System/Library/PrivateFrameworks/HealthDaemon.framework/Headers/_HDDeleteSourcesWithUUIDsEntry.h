/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSSet, NSString;

@interface _HDDeleteSourcesWithUUIDsEntry : HDJournalEntry

{
    NSSet *_UUIDs;
    NSString *_bundleIdentifier;
}

@property (retain, nonatomic) NSSet *UUIDs;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDs:(id)arg1 bundleIdentifier:(id)arg2;

@end
