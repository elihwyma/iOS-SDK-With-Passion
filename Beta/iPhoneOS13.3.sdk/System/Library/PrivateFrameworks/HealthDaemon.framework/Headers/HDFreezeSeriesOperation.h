/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDictionary, NSUUID;

@interface HDFreezeSeriesOperation : HDJournalableOperation

{
    NSUUID *_identifier;
    NSDictionary *_metadata;
    Class _entityClass;
    NSUUID *_frozenIdentifier;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) NSUUID *frozenIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 entityClass:(Class)arg3;

@end
