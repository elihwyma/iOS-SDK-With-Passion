/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKQueryAnchor, NSDictionary;

@interface HDConceptIndexManagerState : NSObject <Swift>

{
    long long _generation;
    HKQueryAnchor *_anchor;
    NSDictionary *_deletionAnchors;
}

@property (nonatomic, readonly) long long generation;
@property (copy, nonatomic, readonly) HKQueryAnchor *anchor;
@property (copy, nonatomic, readonly) NSDictionary *deletionAnchors;

+ (_Bool)supportsSecureCoding;
+ (id)stateWithGeneration:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneration:(long long)arg1 anchor:(id)arg2 deletionAnchors:(id)arg3;
- (id)copyWithAnchor:(id)arg1;
- (id)copyWithDeletionAnchor:(id)arg1 forSampleType:(id)arg2;

@end
