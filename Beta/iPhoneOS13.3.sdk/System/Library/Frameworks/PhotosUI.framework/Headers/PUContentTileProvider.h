/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUMediaProvider, UIWindow;

@interface PUContentTileProvider : NSObject

{
    PUMediaProvider *_mediaProvider;
    UIWindow *_window;
}

@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) UIWindow *window;

- (id)init;
- (id)initWithMediaProvider:(id)arg1;
- (void)registerTileControllerClassesWithTilingView:(id)arg1;
- (id)tileControllerForAsset:(id)arg1 viewModel:(id)arg2 tilingView:(id)arg3;

@end
