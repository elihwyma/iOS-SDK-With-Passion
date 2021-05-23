/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSDateInterval, NSDictionary, NSNumber, NSSet;

@interface HDSyncPredicate : NSObject <Swift>

{
    NSSet *_excludedSyncProvenances;
    NSDateInterval *_dateInterval;
    NSSet *_includedObjectTypes;
    NSNumber *_defaultMaximumObjectAge;
    NSNumber *_defaultMaximumTombstoneAge;
    NSDictionary *_maximumObjectAgeByType;
}

@property (copy, nonatomic, readonly) NSSet *excludedSyncProvenances;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSSet *includedObjectTypes;
@property (copy, nonatomic, readonly) NSNumber *defaultMaximumObjectAge;
@property (copy, nonatomic, readonly) NSNumber *defaultMaximumTombstoneAge;
@property (copy, nonatomic, readonly) NSDictionary *maximumObjectAgeByType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExcludedSyncProvenances:(id)arg1 dateInterval:(id)arg2 includedObjectTypes:(id)arg3 defaultMaximumObjectAge:(id)arg4 defaultMaximumTombstoneAge:(id)arg5 maximumObjectAgeByType:(id)arg6;
- (id)maximumObjectAgeForType:(id)arg1;

@end
