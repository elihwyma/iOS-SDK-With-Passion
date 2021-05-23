/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject

{
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *invalidatedAuxillaryKinds;

- (id)init;
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;
- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;

@end
