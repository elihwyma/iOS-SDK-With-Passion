/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;

@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSizes : NSObject <Swift>

{
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
}

@property (nonatomic) long long frameOffset;
@property (retain, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSIndexSet *indexes;
@property (nonatomic, readonly) NSSet *elementKinds;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5;
- (_Bool)hasSizes;
- (_Bool)containsSupplementaryOffsets:(id)arg1;
- (id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;
- (void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3;

@end
