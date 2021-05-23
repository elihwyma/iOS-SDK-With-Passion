/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject

{
    IKAppPlaylistBridge *_bridge;
}

@property (nonatomic, readonly) IKAppPlaylistBridge *bridge;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;

- (id)init;
- (void)dealloc;
- (void)push:(id)arg1;
- (id)pop;
- (id)item:(long long)arg1;
- (id)splice:(unsigned long long)arg1:(unsigned long long)arg2:(id)arg3;

@end
