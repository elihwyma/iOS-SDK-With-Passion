/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSData, NSUUID;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry

{
    _Bool _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
}

@property (nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic, readonly) NSData *childUUIDsData;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) _Bool enforceSameSource;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(_Bool)arg4;

@end
