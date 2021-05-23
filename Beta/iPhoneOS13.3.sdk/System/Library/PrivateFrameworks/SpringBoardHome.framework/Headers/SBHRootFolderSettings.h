/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@interface SBHRootFolderSettings : PTSettings

{
    _Bool _adjustableLayoutEnabled;
    double _portraitTopLayoutInset;
    double _portraitBottomLayoutInset;
    double _portraitSideLayoutInset;
    double _landscapeTopLayoutInset;
    double _landscapeBottomLayoutInset;
    double _landscapeSideLayoutInset;
}

@property (nonatomic, getter=isAdjustableLayoutEnabled) _Bool adjustableLayoutEnabled;
@property (nonatomic) double portraitTopLayoutInset;
@property (nonatomic) double portraitBottomLayoutInset;
@property (nonatomic) double portraitSideLayoutInset;
@property (nonatomic) double landscapeTopLayoutInset;
@property (nonatomic) double landscapeBottomLayoutInset;
@property (nonatomic) double landscapeSideLayoutInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
