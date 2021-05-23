/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush

{
    UIImage *_maskImage;
    UIImage *_backgroundImage;
    UIImage *_overlayImage;
    struct UIEdgeInsets _maskInsets;
}

@property (retain, nonatomic) UIImage *maskImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) struct UIEdgeInsets maskInsets;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (double)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
