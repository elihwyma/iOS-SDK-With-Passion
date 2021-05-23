/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBHIconAnimationSettings : PTSettings

{
    SBFAnimationSettings *_centralAnimationSettings;
}

@property (retain, nonatomic) SBFAnimationSettings *centralAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
