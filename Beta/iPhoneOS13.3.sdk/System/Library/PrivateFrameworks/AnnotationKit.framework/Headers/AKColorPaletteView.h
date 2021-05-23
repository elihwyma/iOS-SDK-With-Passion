/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, UICollectionView, UIColor;

@interface AKColorPaletteView : UIControl

{
    UIColor *_color;
    long long _scrollDirection;
    UICollectionView *_collectionView;
    NSArray *_colors;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)wantsInkUpdate;
- (struct CGSize)_itemSizeInContainer;
- (id)_indexPathOfColor:(id)arg1;
- (void)scrollToCurrentColor;

@end
