/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBSceneDisconnectionManager : NSObject

{
    _Bool _isExecuting;
    unsigned long long _numberOfRecentScenesExcludedFromDisconnection;
}

@property (nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;
@property (nonatomic) _Bool isExecuting;

+ (id)sharedManager;

- (id)init;
- (id)sceneManager;
- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1;
- (id)liveScenesForApplication:(id)arg1;
- (_Bool)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2;
- (void)disconnectScenes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)positionOf:(id)arg1 inSwitcher:(id)arg2;

@end
