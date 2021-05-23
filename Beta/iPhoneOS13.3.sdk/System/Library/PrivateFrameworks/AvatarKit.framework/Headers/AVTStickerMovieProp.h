/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <AvatarKit/AVTStickerProp.h>

@class AVPlayerItem, NSMutableArray, NSURL;

@interface AVTStickerMovieProp : AVTStickerProp

{
    AVPlayerItem *_moviePlayerItem;
    NSURL *_movieURL;
    NSMutableArray *_loadingNodes;
}

@property (retain, nonatomic) AVPlayerItem *moviePlayerItem;
@property (retain, nonatomic) NSMutableArray *loadingNodes;
@property (nonatomic, readonly) NSURL *movieURL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateNode:(id)arg1 withContentAtTime:(CDStruct_1b6d18a9)arg2;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 scale:(struct SCNVector3)arg3 position:(struct SCNVector3)arg4 renderLast:(_Bool)arg5 orientToCamera:(_Bool)arg6 rotation:(struct SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end
