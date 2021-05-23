/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface PXGDebugHUDLayer : CALayer

{
    NSArray *_graphLayers;
    struct CGColor *_green;
    struct CGColor *_yellow;
    struct CGColor *_red;
}

@property (copy, nonatomic) NSArray *graphLayers;
@property (nonatomic) struct CGColor *green;
@property (nonatomic) struct CGColor *yellow;
@property (nonatomic) struct CGColor *red;

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg1;
- (void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4;

@end
