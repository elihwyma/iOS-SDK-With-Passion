/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UICollectionView.h>

@class OKNavigatorCollectionViewController;

@interface OKNavigatorCollectionView : UICollectionView

{
    OKNavigatorCollectionViewController *_collectionViewController;
}

@property (nonatomic) OKNavigatorCollectionViewController *collectionViewController;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
