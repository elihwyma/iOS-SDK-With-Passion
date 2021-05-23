/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBFolderControllerConfiguration.h>

@interface SBFloatyFolderControllerConfiguration : SBFolderControllerConfiguration

{
    _Bool _displaysMultipleIconListsInLandscapeOrientation;
    unsigned long long _backgroundEffect;
}

@property (nonatomic) unsigned long long backgroundEffect;
@property (nonatomic) _Bool displaysMultipleIconListsInLandscapeOrientation;

- (id)initWithConfiguration:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
