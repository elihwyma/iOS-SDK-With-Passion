/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKThemeBrush.h>

@interface GKImageBrush : GKThemeBrush

{
    CDUnknownBlockType _inputTransform;
}

@property (copy, nonatomic) CDUnknownBlockType inputTransform;

- (struct CGSize)sizeForInput:(id)arg1;
- (double)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
