/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

@interface PUToolbarViewModelChange : PUViewModelChange

{
    _Bool _toolbarItemsChanged;
    _Bool _accessoryViewChanged;
    _Bool _accessoryViewTopOutsetChanged;
    _Bool _accessoryViewMaximumHeightChanged;
    _Bool _maximumHeightChanged;
}

@property (nonatomic, setter=_setToolbarItemsChanged:) _Bool toolbarItemsChanged;
@property (nonatomic, setter=_setAccessoryViewChanged:) _Bool accessoryViewChanged;
@property (nonatomic, setter=_setAccessoryViewTopOutsetChanged:) _Bool accessoryViewTopOutsetChanged;
@property (nonatomic, setter=_setAccessoryViewMaximumHeightChanged:) _Bool accessoryViewMaximumHeightChanged;
@property (nonatomic, setter=_setMaximumHeightChanged:) _Bool maximumHeightChanged;

- (_Bool)hasChanges;

@end
