/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@class SBFParallaxSettings;

@interface SBHIconSettings : PTSettings

{
    _Bool _suppressJitter;
    _Bool _closeBoxesEverywhere;
    SBFParallaxSettings *_iconParallaxSettings;
    SBFParallaxSettings *_badgeParallaxSettings;
}

@property (nonatomic) _Bool suppressJitter;
@property (nonatomic) _Bool closeBoxesEverywhere;
@property (retain, nonatomic) SBFParallaxSettings *iconParallaxSettings;
@property (retain, nonatomic) SBFParallaxSettings *badgeParallaxSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
