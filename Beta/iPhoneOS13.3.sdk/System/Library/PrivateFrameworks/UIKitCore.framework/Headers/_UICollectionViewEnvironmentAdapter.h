/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UICollectionView, UITraitCollection;

@protocol NSCollectionLayoutContainer, _UIDataSourceSnapshot;

__attribute__((visibility("hidden")))
@interface _UICollectionViewEnvironmentAdapter : NSObject

{
    UICollectionView *_collectionView;
}

@property (weak, nonatomic, getter=_collectionView) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSCollectionLayoutContainer> container;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) id <_UIDataSourceSnapshot> _dataSourceSnapshot;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGSize effectiveContentSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets contentInsets;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets effectiveContentInsets;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)initWithCollectionView:(id)arg1;

@end
