/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDynamicButton.h>

@interface GKTimeScopeButton : GKDynamicButton

{
    long long _timeScope;
}

@property (nonatomic) long long timeScope;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end
