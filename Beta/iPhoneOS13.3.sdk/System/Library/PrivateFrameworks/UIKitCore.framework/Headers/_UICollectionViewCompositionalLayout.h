/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class NSArray;

@interface _UICollectionViewCompositionalLayout : UICollectionViewCompositionalLayout

{
    long long _scrollDirection;
    NSArray *_boundarySupplementaryItems;
    NSArray *_supplementaryItems;
}

@property (nonatomic, readonly) long long scrollDirection;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (copy, nonatomic) NSArray *supplementaryItems;

- (id)initWithLayoutSection:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithLayoutSection:(id)arg1 configuration:(id)arg2;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 scrollDirection:(long long)arg2;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1;

@end
