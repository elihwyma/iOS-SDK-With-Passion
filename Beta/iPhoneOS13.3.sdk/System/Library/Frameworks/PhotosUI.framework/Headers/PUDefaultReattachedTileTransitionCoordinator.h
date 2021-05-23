/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUTileReattachmentContext;

__attribute__((visibility("hidden")))
@interface PUDefaultReattachedTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

{
    PUTileReattachmentContext *_context;
}

@property (retain, nonatomic) PUTileReattachmentContext *context;

- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;

@end
