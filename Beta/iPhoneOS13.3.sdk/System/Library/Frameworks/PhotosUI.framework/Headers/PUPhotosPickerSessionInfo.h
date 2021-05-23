/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSessionInfo.h>

__attribute__((visibility("hidden")))
@interface PUPhotosPickerSessionInfo : PUSessionInfo

- (_Bool)isSelectingAssets;
- (id)localizedPrompt;
- (id)initWithTargetAlbum:(struct NSObject *)arg1;
- (id)initWithTargetAlbumName:(id)arg1;
- (id)_initWithTargetAlbum:(struct NSObject *)arg1 orTargetAlbumName:(id)arg2;

@end
