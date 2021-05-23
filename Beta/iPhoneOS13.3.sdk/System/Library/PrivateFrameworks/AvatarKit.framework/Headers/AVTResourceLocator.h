/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface AVTResourceLocator : NSObject

{
    NSMutableDictionary *_imageCache;
    NSURL *_resourcesURL;
    NSURL *_componentsURL;
}

@property (readonly) NSURL *resourcesURL;
@property (readonly) NSURL *memojiResourcesURL;
@property (readonly) NSURL *animojiResourcesURL;
@property (readonly) NSURL *stickerResourcesURL;
@property (readonly) NSURL *componentsURL;
@property (readonly) NSURL *maskImagesURL;
@property (readonly) NSURL *materialsURL;
@property (readonly) NSURL *presetThumbnailsURL;
@property (readonly) NSURL *propsURL;

+ (id)sharedResourceLocator;

- (id)init;
- (struct CGImage *)imageWithPath:(id)arg1;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2;
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;

@end
