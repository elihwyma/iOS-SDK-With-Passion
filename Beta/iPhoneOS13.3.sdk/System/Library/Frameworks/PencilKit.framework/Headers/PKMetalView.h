/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class CAMetalLayer;

@interface PKMetalView : UIView

{
    _Bool _isWideGamut;
    _Bool _isFixedPixelSize;
    _Bool _doubleBuffered;
    struct CGSize _fixedPixelSize;
}

@property (nonatomic, readonly) CAMetalLayer *metalLayer;
@property (nonatomic, readonly) _Bool isWideGamut;
@property (nonatomic, readonly) _Bool isFixedPixelSize;
@property (nonatomic, readonly) struct CGSize fixedPixelSize;
@property (nonatomic) _Bool doubleBuffered;
@property (nonatomic, readonly) _Bool isDrawableAvailable;
@property (nonatomic, readonly) struct CGSize drawableSize;

+ (Class)layerClass;

- (void)setFixedPixelSize:(struct CGSize)arg1;
- (void)resizeDrawableIfNecessary;
- (id)initWithFrame:(struct CGRect)arg1 andPixelSize:(struct CGSize)arg2 isWideGamut:(_Bool)arg3;
- (void)flushDrawables;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect)arg1 isWideGamut:(_Bool)arg2;

@end
