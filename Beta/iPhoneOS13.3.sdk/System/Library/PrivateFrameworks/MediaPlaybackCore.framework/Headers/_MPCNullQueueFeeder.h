/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPQueueFeeder.h>

@class NSString;

@interface _MPCNullQueueFeeder : MPQueueFeeder

{
    NSString *_uniqueIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool containsLiveStream;
@property (nonatomic, readonly) _Bool containsTransportableContent;

- (id)init;
- (id)uniqueIdentifier;
- (id)playbackInfoForItem:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;

@end
