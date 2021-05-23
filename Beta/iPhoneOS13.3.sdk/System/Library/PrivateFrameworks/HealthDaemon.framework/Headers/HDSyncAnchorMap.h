/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <Swift>

{
    NSMutableDictionary *_anchorsByEntityIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *anchorsByEntityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)anchorCount;
- (void)setAnchorsFromMap:(id)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntityIdentifier:(id)arg2;
- (id)anchorIfPresentForSyncEntityIdentifier:(id)arg1;
- (_Bool)isAllZero;

@end
