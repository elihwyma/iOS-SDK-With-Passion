/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSEventListenerObject.h>

@class IKAppPlayerBridge, IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IKJSPlayer : IKJSEventListenerObject

{
    IKJSPlaylist *_playlist;
    long long _playerState;
    _Bool _holdingSelfReference;
    NSMutableDictionary *_timedMetadataListeners;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
    IKAppPlayerBridge *_bridge;
}

@property (nonatomic, readonly) IKAppPlayerBridge *bridge;
@property (nonatomic, readonly) NSString *playbackState;
@property (retain, nonatomic) IKJSPlaylist *playlist;
@property (nonatomic, readonly) IKJSMediaItem *currentMediaItem;
@property (nonatomic, readonly) IKJSMediaItem *nextMediaItem;
@property (nonatomic, readonly) IKJSMediaItem *previousMediaItem;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic) double playbackRate;
@property (nonatomic) _Bool muted;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) _Bool interactiveOverlayDismissable;
@property (nonatomic, readonly) NSArray *currentMediaItemAccessLogs;
@property (nonatomic, readonly) NSArray *currentMediaItemErrorLogs;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (nonatomic) _Bool showsResumeMenu;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (long long)state;
- (void)next;
- (void)previous;
- (void)play;
- (void)present;
- (_Bool)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (_Bool)_timedMetadataDidChangeWithExtraInfo:(id)arg1;
- (void)_removeManagedReference;
- (void)_addManagedReference;

@end
