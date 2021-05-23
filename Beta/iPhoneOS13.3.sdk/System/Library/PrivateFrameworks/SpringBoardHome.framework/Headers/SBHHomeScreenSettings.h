/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@class SBHFolderSettings, SBHIconAnimationRootSettings, SBHIconSettings, SBHRootFolderSettings;

@interface SBHHomeScreenSettings : PTSettings

{
    _Bool _usesMinimumViableHomeScreen;
    _Bool _showPopOvers;
    _Bool _showWidgets;
    double _defaultDragInteractionLiftDelay;
    SBHIconAnimationRootSettings *_iconAnimationSettings;
    SBHIconSettings *_iconSettings;
    SBHFolderSettings *_folderSettings;
    SBHRootFolderSettings *_rootFolderSettings;
}

@property (nonatomic) _Bool usesMinimumViableHomeScreen;
@property (nonatomic) _Bool showPopOvers;
@property (nonatomic) _Bool showWidgets;
@property (nonatomic) double defaultDragInteractionLiftDelay;
@property (retain, nonatomic) SBHIconAnimationRootSettings *iconAnimationSettings;
@property (retain, nonatomic) SBHIconSettings *iconSettings;
@property (retain, nonatomic) SBHFolderSettings *folderSettings;
@property (retain, nonatomic) SBHRootFolderSettings *rootFolderSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
