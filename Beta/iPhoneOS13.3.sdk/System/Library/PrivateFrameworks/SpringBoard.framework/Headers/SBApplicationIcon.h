/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon

{
    SBApplication *_application;
}

+ (_Bool)canGenerateIconsInBackground;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tags;
- (void)setBadge:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (id)application;
- (id)automationID;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(_Bool)arg1;
- (id)descriptionForLocation:(id)arg1;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (id)iconCategoryDescription;
- (id)iconFileSizeDescription;
- (_Bool)isApplicationIcon;

@end
