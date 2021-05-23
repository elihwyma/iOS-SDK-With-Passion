/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <Swift>

{
    NSMutableDictionary *_anchorRangesByEntityIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *anchorRangesByEntityIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)codableSyncAnchorRangeMap;
- (id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id *)arg2;
- (unsigned long long)anchorRangeCount;
- (_Bool)getAnchorRange:(struct HDSyncAnchorRange *)arg1 forSyncEntityIdentifier:(id)arg2;
- (void)setAnchorRange:(struct HDSyncAnchorRange)arg1 forSyncEntityIdentifier:(id)arg2;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;

@end
