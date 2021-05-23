/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTStickerProp.h>

@class SCNScene;

@interface AVTStickerSceneProp : AVTStickerProp

{
    SCNScene *_scene;
}

@property (nonatomic, readonly) SCNScene *scene;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithScene:(id)arg1 scale:(struct SCNVector3)arg2 position:(struct SCNVector3)arg3 rotation:(struct SCNVector3)arg4 renderLast:(_Bool)arg5 palettesDescriptions:(id)arg6 modifiers:(id)arg7;

@end
