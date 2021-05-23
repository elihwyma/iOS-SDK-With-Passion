/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBSTARSettings : PTSettings

{
    float _enterTransitionBacklightFadeOutDuration;
    float _enterTransitionBacklightFadeInDuration;
    float _exitTransitionBacklightFadeOutDuration;
    float _exitTransitionBacklightFadeInDuration;
}

@property (nonatomic) float enterTransitionBacklightFadeOutDuration;
@property (nonatomic) float enterTransitionBacklightFadeInDuration;
@property (nonatomic) float exitTransitionBacklightFadeOutDuration;
@property (nonatomic) float exitTransitionBacklightFadeInDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
