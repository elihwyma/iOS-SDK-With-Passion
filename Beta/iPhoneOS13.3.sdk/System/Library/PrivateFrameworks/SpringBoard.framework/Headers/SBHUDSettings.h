/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBHUDSettings : PTSettings

{
    float _defaultHUDPresentationAnimationDuration;
}

@property (nonatomic) float defaultHUDPresentationAnimationDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
