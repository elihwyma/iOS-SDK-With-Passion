/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKRemoteUIController.h>

@class NSArray, NSDictionary, NSURL;

@interface GKAccountRemoteUIController : GKRemoteUIController

{
    _Bool _authenticatePlayerOnCompletion;
    long long _mode;
    NSArray *_availableExternalServices;
    NSURL *_url;
    NSDictionary *_postBody;
}

@property (retain, nonatomic) NSArray *availableExternalServices;
@property (nonatomic) long long mode;
@property (nonatomic) _Bool authenticatePlayerOnCompletion;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *postBody;

+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)initWithMode:(long long)arg1;
- (id)bagKey;
- (id)fallbackURL;
- (void)fireCompletionHandler;
- (id)initWithMode:(long long)arg1 player:(id)arg2;
- (id)postBodyForInitialLoad;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
