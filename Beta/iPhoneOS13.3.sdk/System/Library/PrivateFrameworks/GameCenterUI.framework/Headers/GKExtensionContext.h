/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSExtensionContext.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, NSString;

@interface GKExtensionContext : NSExtensionContext <Swift>

{
    GKGame *_game;
    long long _sandboxToken;
}

@property (nonatomic) long long sandboxToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

- (void)dealloc;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromClient:(id)arg1;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;

@end
