/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModelChange : PUViewModelChange

{
    _Bool _currentStateDidChange;
    _Bool _wantsChromeVisibleDidChange;
}

@property (nonatomic, setter=_setCurrentStateDidChange:) _Bool currentStateDidChange;
@property (nonatomic, setter=_setWantsChromeVisibleDidChange:) _Bool wantsChromeVisibleDidChange;

- (_Bool)hasChanges;

@end
