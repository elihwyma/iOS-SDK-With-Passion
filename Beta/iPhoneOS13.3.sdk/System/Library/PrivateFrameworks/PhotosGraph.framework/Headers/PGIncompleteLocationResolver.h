/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PGIncompleteLocationResolver : NSObject

{
    NSSet *_addressNodes;
    NSMutableDictionary *_resolvedLocationNodesCache;
}

@property (retain, nonatomic) NSSet *addressNodes;
@property (retain, nonatomic) NSMutableDictionary *resolvedLocationNodesCache;

+ (double)_maxDistanceForDimension:(unsigned long long)arg1;

- (id)initWithAddressNodes:(id)arg1;
- (id)_resolveIdentifierForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withPreferredTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3;
- (id)_resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 continueResolvingHigherDimensions:(_Bool)arg4;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 resolvedLocation:(id *)arg4 sortedAddresses:(id)arg5;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 resolvedLocation:(id *)arg4 addresses:(id)arg5;

@end
