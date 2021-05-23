/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController

{
    GKPlayer *_problemPlayer;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) GKPlayer *problemPlayer;

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)bagKey;
- (id)fallbackURL;
- (id)postBodyForInitialLoad;
- (id)initWithProblemPlayer:(id)arg1;
- (int)preferredLayoutStyle;

@end
