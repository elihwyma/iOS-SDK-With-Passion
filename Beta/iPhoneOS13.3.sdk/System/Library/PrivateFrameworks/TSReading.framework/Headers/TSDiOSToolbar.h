/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIToolbar.h>

@class UIImage;

@interface TSDiOSToolbar : UIToolbar

{
    UIImage *mBackgroundImage;
    _Bool mDrawsBackground;
    double mShadowOpacity;
    struct CGSize mShadowOffset;
    double mShadowRadius;
    double mShadowX;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) _Bool drawsBackground;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowX;

- (void)dealloc;
- (void)layoutSubviews;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)p_updateLayerFlags;
- (void)setupShadowPath;

@end
