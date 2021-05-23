/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputsView : UIKBKeyView <Swift>

{
    _Bool _verticalLayout;
    UICollectionView *_collectionView;
    NSArray *_recentInputStrings;
    UICollectionViewFlowLayout *_flowLayout;
}

@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *recentInputStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setRecentInputs:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (unsigned long long)focusableVariantCount;
- (void)setupCollectionView;
- (void)setVerticalLayout:(_Bool)arg1;
- (void)refreshSelectedRecent;
- (id)selectedRecentInputString;

@end
