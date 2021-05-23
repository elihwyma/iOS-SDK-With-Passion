/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageSource.h>

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource

{
    NSMapTable *_keysForSizes;
}

@property (retain, nonatomic) NSMapTable *keysForSizes;

- (id)keyForImageSize:(struct CGSize)arg1;
- (id)imageForImageSize:(struct CGSize)arg1;
- (void)cachedImageFromGamedWithSubdirectory:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)cacheImageUsingGamed:(id)arg1 cacheSubdirectory:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)deleteImageUsingGamedWithSubdirectory:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
