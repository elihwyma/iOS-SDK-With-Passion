/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture

{
    NSMapTable *_invalidationBlocks;
    _Bool _invalid;
}

@property (nonatomic, readonly, getter=isInvalid) _Bool invalid;

- (void)invalidate;
- (id)onInvalid:(CDUnknownBlockType)arg1;
- (id)onInvalid:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
