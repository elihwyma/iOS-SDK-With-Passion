/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditIrisModelChange : PUViewModelChange

{
    _Bool _videoEnabledDidChange;
}

@property (nonatomic, setter=_setVideoEnabledDidChange:) _Bool videoEnabledDidChange;

- (_Bool)hasChanges;

@end
