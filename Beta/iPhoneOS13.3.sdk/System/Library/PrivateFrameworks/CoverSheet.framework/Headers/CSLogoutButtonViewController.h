/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSVibrantWallpaperButton;

@protocol CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperViewProviding;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

{
    id <CSUserSessionControlling> _userSessionController;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
}

@property (nonatomic, readonly) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) id <CSUserSessionControlling> userSessionController;
@property (weak, nonatomic) id <CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id <CSWallpaperViewProviding> wallpaperViewProvider;

- (void)loadView;
- (void)_buttonPressed:(id)arg1;

@end
