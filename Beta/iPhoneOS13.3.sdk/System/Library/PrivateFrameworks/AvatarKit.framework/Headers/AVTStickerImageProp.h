/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp

{
    struct UIImage *_image;
}

@property (nonatomic, readonly) UIImage *image;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithImage:(struct UIImage *)arg1 size:(struct CGSize)arg2 scale:(struct SCNVector3)arg3 position:(struct SCNVector3)arg4 renderLast:(_Bool)arg5 orientToCamera:(_Bool)arg6 rotation:(struct SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end
