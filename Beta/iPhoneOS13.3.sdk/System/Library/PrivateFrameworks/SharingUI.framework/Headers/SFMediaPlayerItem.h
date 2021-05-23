/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSURL;

@interface SFMediaPlayerItem : NSObject

{
    _Bool _shouldLoop;
    NSURL *_url;
    NSArray *_playbackNotificationTimeRanges;
    CDUnknownBlockType _timeRangeHandler;
    CDUnknownBlockType _startedHandler;
    CDUnknownBlockType _completedHandler;
    NSMutableArray *_playerItems;
    id _observerToken;
}

@property (retain, nonatomic) NSMutableArray *playerItems;
@property (retain, nonatomic) id observerToken;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) _Bool shouldLoop;
@property (copy, nonatomic, readonly) NSArray *playbackNotificationTimeRanges;
@property (copy, nonatomic, readonly) CDUnknownBlockType timeRangeHandler;
@property (copy, nonatomic) CDUnknownBlockType startedHandler;
@property (copy, nonatomic) CDUnknownBlockType completedHandler;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)invalidate;
- (id)initWithURL:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaybackNotificationTimeRanges:(id)arg1 withTimeRangeHandler:(CDUnknownBlockType)arg2;

@end
