/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject

{
    unsigned long long _resumeMenuBehavior;
}

@property (nonatomic) unsigned long long resumeMenuBehavior;

- (id)init;
- (id)_storeMediaItemsForAdamID:(long long)arg1 IKMediaElement:(id)arg2;
- (id)_storeAuxMediaItemForIKMediaElement:(id)arg1 isExtrasContent:(_Bool)arg2;
- (id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2;
- (_Bool)_shouldDisableResumeMenuForAsset:(id)arg1;
- (id)playlistForIKMediaElements:(id)arg1 isExtrasContent:(_Bool)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2;

@end
