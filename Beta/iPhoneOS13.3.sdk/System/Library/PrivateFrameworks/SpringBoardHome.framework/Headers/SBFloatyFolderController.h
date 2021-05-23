/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBFolderController.h>

@interface SBFloatyFolderController : SBFolderController

@property (nonatomic) unsigned long long backgroundEffect;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;

- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (id)presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (id)floatyFolderView;

@end
