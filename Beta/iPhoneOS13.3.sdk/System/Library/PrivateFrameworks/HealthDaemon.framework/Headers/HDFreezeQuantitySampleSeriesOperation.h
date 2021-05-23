/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDate, NSDictionary, NSUUID;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation

{
    NSUUID *_identifier;
    NSDictionary *_metadata;
    NSDate *_endDate;
    NSUUID *_frozenIdentifier;
    long long _freezeResult;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic, readonly) NSUUID *frozenIdentifier;
@property (nonatomic, readonly) long long freezeResult;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3;

@end
