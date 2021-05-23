/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBrush.h>

@class GKUITheme;

@interface GKThemeBrush : GKBrush

{
    GKUITheme *_theme;
}

@property (retain, nonatomic) GKUITheme *theme;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTheme:(id)arg1;

@end
