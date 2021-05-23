/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingButtonView : MPButton

{
    _Bool _userInterfaceStyleSwitchingEnabled;
    long long _currentMode;
    long long _deviceType;
    CCUICAPackageView *_packageView;
}

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) _Bool userInterfaceStyleSwitchingEnabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateGlyphState;
- (void)_updateGlyphPackage;
- (id)_glyphResource;

@end
