/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackEngine, NSMutableSet, NSString;

@interface _MPCLeaseManager : NSObject

{
    _Bool _isPreparingForImminentPlaybackIntent;
    MPCPlaybackEngine *_playbackEngine;
    NSMutableSet *_leaseEndIgnoreReasons;
}

@property (retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_updateStateForPlaybackPrevention;
- (void)prepareForPlaybackWithUserIdentity:(id)arg1;
- (void)setCanStealLeaseIfNeeded;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)beginIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)endIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)prepareForCurrentItemPlayback;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;

@end
