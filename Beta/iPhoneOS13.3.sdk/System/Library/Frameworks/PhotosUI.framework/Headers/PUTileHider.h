/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUTileHider : NSObject

{
    PUTilingView *_tilingView;
    NSMutableDictionary *__hiddenTileControllersByLayoutInfo;
    double __animationDuration;
}

@property (nonatomic, readonly) NSMutableDictionary *_hiddenTileControllersByLayoutInfo;
@property (nonatomic, readonly) double _animationDuration;
@property (nonatomic, readonly) PUTilingView *tilingView;

- (id)init;
- (void)dealloc;
- (id)initWithTilingView:(id)arg1;
- (void)hideTilesAtIndexPath:(id)arg1 withKinds:(id)arg2 dataSourceIdentifier:(id)arg3 animated:(_Bool)arg4;
- (void)unhideTilesAnimated:(_Bool)arg1;
- (void)reattachTiles;

@end
