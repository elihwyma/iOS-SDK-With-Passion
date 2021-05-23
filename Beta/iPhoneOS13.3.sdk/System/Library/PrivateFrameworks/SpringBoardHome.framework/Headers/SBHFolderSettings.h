/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@interface SBHFolderSettings : PTSettings

{
    _Bool _allowNestedFolders;
    _Bool _pinchToClose;
    _Bool _oneColumnAtATime;
    _Bool _sortsIconsAlphabetically;
    double _minPinchScale;
}

@property (nonatomic) _Bool allowNestedFolders;
@property (nonatomic) _Bool pinchToClose;
@property (nonatomic) double minPinchScale;
@property (nonatomic) _Bool oneColumnAtATime;
@property (nonatomic) _Bool sortsIconsAlphabetically;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
