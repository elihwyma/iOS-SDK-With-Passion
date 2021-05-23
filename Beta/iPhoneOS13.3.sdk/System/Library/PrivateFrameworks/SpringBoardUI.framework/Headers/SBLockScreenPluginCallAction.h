/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class NSURL, TUDialRequest;

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction

{
    TUDialRequest *_dialRequest;
}

@property (nonatomic, readonly) NSURL *url;

- (id)initWithURL:(id)arg1;
- (_Bool)isCallAction;

@end
