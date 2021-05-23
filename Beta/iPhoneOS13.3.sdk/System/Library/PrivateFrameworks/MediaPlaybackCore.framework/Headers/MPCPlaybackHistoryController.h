/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackEngine, MPModelPlayEvent, NSOperationQueue, NSString;

@interface MPCPlaybackHistoryController : NSObject

{
    MPCPlaybackEngine *_playbackEngine;
    NSOperationQueue *_operationQueue;
    MPModelPlayEvent *_lastRecordedPlayEvent;
    long long _currentRepeatType;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent;
@property (nonatomic) long long currentRepeatType;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (id)initWithPlaybackEngine:(id)arg1;

@end
