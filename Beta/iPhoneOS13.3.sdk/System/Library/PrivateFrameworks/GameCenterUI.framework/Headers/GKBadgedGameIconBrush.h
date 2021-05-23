/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKThemeBrush.h>

@interface GKBadgedGameIconBrush : GKThemeBrush

{
    GKThemeBrush *_badgeBrush;
}

@property (retain, nonatomic) GKThemeBrush *badgeBrush;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (double)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
