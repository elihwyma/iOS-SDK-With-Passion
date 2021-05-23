/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface CSCoverSheetTransitionSettings : PTSettings

{
    _Bool _blursPanel;
    _Bool _fadesContent;
    _Bool _darkensContent;
    _Bool _panelWallpaper;
    _Bool _trackingWallpaper;
    _Bool _revealWallpaper;
    _Bool _fadePanelWallpaper;
    _Bool _iconsFlyIn;
    double _blurRadius;
    double _blurStart;
    double _blurEnd;
    double _blurEndReducedTransparency;
    double _maxContentAlpha;
    double _contentFadeStart;
    double _contentFadeEnd;
    double _darkeningColorWhite;
    double _darkeningColorAlpha;
    double _darkeningStart;
    double _darkeningEnd;
    double _trackingWallpaperParallaxFactor;
    double _fadePanelWallpaperStart;
    double _fadePanelWallpaperEnd;
}

@property (nonatomic) _Bool blursPanel;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurStart;
@property (nonatomic) double blurEnd;
@property (nonatomic) double blurEndReducedTransparency;
@property (nonatomic) _Bool fadesContent;
@property (nonatomic) double maxContentAlpha;
@property (nonatomic) double contentFadeStart;
@property (nonatomic) double contentFadeEnd;
@property (nonatomic) _Bool darkensContent;
@property (nonatomic) double darkeningColorWhite;
@property (nonatomic) double darkeningColorAlpha;
@property (nonatomic) double darkeningStart;
@property (nonatomic) double darkeningEnd;
@property (nonatomic) _Bool panelWallpaper;
@property (nonatomic) _Bool trackingWallpaper;
@property (nonatomic) double trackingWallpaperParallaxFactor;
@property (nonatomic) _Bool revealWallpaper;
@property (nonatomic) _Bool fadePanelWallpaper;
@property (nonatomic) double fadePanelWallpaperStart;
@property (nonatomic) double fadePanelWallpaperEnd;
@property (nonatomic) _Bool iconsFlyIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settingsControllerModule;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setDefaultValues;

@end
