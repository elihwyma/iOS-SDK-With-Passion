/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUReflectionView, UIImageView;

@interface SUReflectionImageView : UIView

{
    double _reflectionHeight;
    double _spacing;
    double _reflectionAlpha;
    _Bool _useImageSize;
    unsigned int _nonSquareImage:1;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}

@property (nonatomic) double reflectionSpacing;
@property (nonatomic) _Bool nonSquareImage;

- (id)init;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2;
- (void)setReflectionAlphaWhenVisible:(double)arg1;
- (void)setReflectionVisible:(_Bool)arg1;
- (void)setUseImageSize:(_Bool)arg1;

@end
