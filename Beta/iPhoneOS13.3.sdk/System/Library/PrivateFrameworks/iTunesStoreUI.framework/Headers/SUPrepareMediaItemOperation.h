/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation

{
    SUMediaPlayerItem *_mediaItem;
}

@property (copy, nonatomic, readonly) SUMediaPlayerItem *mediaPlayerItem;

- (id)init;
- (void)dealloc;
- (void)run;
- (id)initWithMediaPlayerItem:(id)arg1;
- (_Bool)_runHEADRequest:(id *)arg1;

@end
