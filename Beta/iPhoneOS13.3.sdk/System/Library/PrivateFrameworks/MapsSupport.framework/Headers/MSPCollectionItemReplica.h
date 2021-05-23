/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPOrderedReplica.h>

@class NSArray, NSString;

@interface MSPCollectionItemReplica : MSPOrderedReplica

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *contents;

+ (id)itemReplicaWithData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;

@end
