/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryOffsets : NSObject <Swift>

{
    NSMutableDictionary *_offsets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *elementKinds;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)offsetsByApplyingOffsets:(id)arg1;
- (struct _NSRange)rangeForElementKind:(id)arg1;
- (id)initWithOffsets:(id)arg1;
- (void)_offsetWithOffsets:(id)arg1 applyingBase:(_Bool)arg2;
- (id)indexesForElementKind:(id)arg1;
- (id)offsetsByRebasingOnOffsets:(id)arg1;
- (long long)offsetForElementKind:(id)arg1;
- (_Bool)overlapsOffsets:(id)arg1;
- (_Bool)containsIndex:(long long)arg1 forElementKind:(id)arg2;
- (void)setRange:(struct _NSRange)arg1 forElementKind:(id)arg2;
- (void)setIndexes:(id)arg1 forElementKind:(id)arg2;
- (void)addIndexes:(id)arg1 forElementKind:(id)arg2;
- (void)incrementCountsFromOffsets:(id)arg1;
- (void)incrementCountForElementKind:(id)arg1;

@end
