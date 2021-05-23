/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDTileProvider.h>

@interface TSDRepTileProvider : TSDTileProvider

- (void)beginDrawingOperation;
- (void)endDrawingOperation;
- (_Bool)isTargetOpaque;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)canTargetDrawInParallel;
- (id)initWithRep:(id)arg1;

@end
