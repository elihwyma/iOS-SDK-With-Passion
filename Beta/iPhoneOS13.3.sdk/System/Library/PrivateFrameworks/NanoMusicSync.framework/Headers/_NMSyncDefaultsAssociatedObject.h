/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class MPMediaPlaylist;

__attribute__((visibility("hidden")))
@interface _NMSyncDefaultsAssociatedObject : NSObject

{
    MPMediaPlaylist *_assetSyncPlaylist;
}

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

- (id)init;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;

@end
