/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKJSPlaylist;

@protocol IKAppPlaylist;

@interface IKAppPlaylistBridge : NSObject

{
    id <IKAppPlaylist> _appPlaylist;
    IKAppContext *_appContext;
    IKJSPlaylist *_jsPlaylist;
}

@property (weak, nonatomic, readonly) IKAppContext *appContext;
@property (weak, nonatomic, readonly) IKJSPlaylist *jsPlaylist;
@property (readonly) unsigned long long length;
@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;
@property (weak, nonatomic, readonly) id <IKAppPlaylist> appPlaylist;

- (void)cleanup;
- (id)item:(long long)arg1;
- (void)_evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (id)initWithAppContext:(id)arg1 jsPlaylist:(id)arg2;
- (id)replaceItemsAt:(long long)arg1 count:(unsigned long long)arg2 with:(id)arg3;

@end
