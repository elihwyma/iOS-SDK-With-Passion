/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateView : UIView

{
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_viewsAbove;
    UICollectionView *_collectionView;
    NSArray *_viewsBelow;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) struct UIEdgeInsets padding;
@property (retain, nonatomic) NSArray *viewsAbove;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *viewsBelow;

- (void)layoutSubviews;
- (void)setBgImage:(id)arg1;

@end
