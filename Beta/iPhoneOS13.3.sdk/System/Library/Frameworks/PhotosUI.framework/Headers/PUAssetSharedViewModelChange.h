/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModelChange : PUViewModelChange

{
    _Bool _loadingStatusChanged;
    _Bool _saveProgressChanged;
    _Bool _saveStateChanged;
    _Bool _flippingFullSizeRenderStateChanged;
}

@property (nonatomic) _Bool loadingStatusChanged;
@property (nonatomic) _Bool saveProgressChanged;
@property (nonatomic) _Bool saveStateChanged;
@property (nonatomic) _Bool flippingFullSizeRenderStateChanged;

- (_Bool)hasChanges;

@end
