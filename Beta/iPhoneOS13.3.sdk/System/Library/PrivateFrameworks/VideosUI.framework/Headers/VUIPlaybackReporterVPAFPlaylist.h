/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterVPAFPlaylist : NSObject

{
    _Bool _isLive;
    NSArray *_eventData;
    NSObject<TVPPlayback> *_player;
    NSArray *_items;
}

@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *eventData;
@property (nonatomic) _Bool isLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlayer:(id)arg1;
- (id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;

@end
