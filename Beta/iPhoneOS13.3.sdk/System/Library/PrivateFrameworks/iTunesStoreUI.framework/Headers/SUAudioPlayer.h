/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, AVURLAsset, NSMutableDictionary, NSString, NSURL, SUPlayerStatus;

@interface SUAudioPlayer : NSObject

{
    AVURLAsset *_asset;
    NSURL *_certificateUrl;
    _Bool _didPostForPreviewHistory;
    NSURL *_keyUrl;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    long long _storeItemIdentifier;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) NSURL *certificateURL;
@property (retain, nonatomic) NSURL *keyURL;
@property (nonatomic, readonly) SUPlayerStatus *playerStatus;
@property (nonatomic) long long storeItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_failWithError:(id)arg1;
- (void)play;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_destroyPlayer;
- (void)_destroyPlayerItem;
- (void)_handleAssetValuesDidLoad;
- (void)_setPlayerState:(long long)arg1;
- (void)_applyNowPlayingInfo;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (void)_postStatusChangeNotification;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (id)valueForNowPlayingKey:(id)arg1;

@end
