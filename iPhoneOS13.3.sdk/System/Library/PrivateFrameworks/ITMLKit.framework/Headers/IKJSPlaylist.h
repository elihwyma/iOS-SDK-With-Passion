//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSPlaylist-Protocol.h>

@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>
{
    IKAppPlaylistBridge *_bridge;
}

@property(readonly, nonatomic) IKAppPlaylistBridge *bridge; // @synthesize bridge=_bridge;
// - (void).cxx_destruct;
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long endAction;
@property(readonly, nonatomic) NSUInteger length;
- (id)item:(long long)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (id)splice:(NSUInteger)arg1:(NSUInteger)arg2:(id)arg3;
- (void)dealloc;
- (id)init;

@end
