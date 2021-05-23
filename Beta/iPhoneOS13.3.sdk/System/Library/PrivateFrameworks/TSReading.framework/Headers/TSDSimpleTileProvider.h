/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDTileProvider.h>

@interface TSDSimpleTileProvider : TSDTileProvider

{
    SEL mAction;
}

@property (nonatomic) SEL action;

- (_Bool)isTargetOpaque;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)canTargetDrawInParallel;

@end
