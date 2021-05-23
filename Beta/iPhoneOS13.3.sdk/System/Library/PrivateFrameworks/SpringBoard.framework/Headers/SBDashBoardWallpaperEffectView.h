/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWallpaperEffectView.h>

@class NSString, SBUIBackgroundView;

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView

{
    SBUIBackgroundView *_backgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCoverSheetWallpaperStyle:(long long)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;

@end
