/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSError;

__attribute__((visibility("hidden")))
@interface AVPlayerConnection : NSObject

{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (nonatomic, readonly) long long status;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)player;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;
- (_Bool)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (void)removeItemFromPlayQueue;
- (id)playerItem;

@end
