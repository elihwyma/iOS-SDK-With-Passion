/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <UIKit/UIView.h>

@class NSData, PRImageView, PRLikeness, PRMonogramView;

@interface PRLikenessView : UIView

{
    _Bool _circular;
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    unsigned long long _likenessType;
    NSData *_recipe;
    struct CGRect _cropRect;
    struct CGImage *_staticRepresentation;
    _Bool _highlighted;
    _Bool _shouldDecode;
    PRLikeness *_likeness;
}

@property (nonatomic, getter=isCircular) _Bool circular;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool shouldDecode;
@property (retain, nonatomic) PRLikeness *likeness;

+ (void)initialize;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_imageView;
- (id)initWithLikeness:(id)arg1;
- (id)_monogramView;
- (void)_updateViewForLikeness:(_Bool)arg1;
- (_Bool)_shouldRenderStaticRepresentation;
- (void)_setDisplayedView:(id)arg1;
- (void)_imageForLikeness:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isLikenessEqual:(id)arg1;
- (void)setNeedsRedraw;

@end
