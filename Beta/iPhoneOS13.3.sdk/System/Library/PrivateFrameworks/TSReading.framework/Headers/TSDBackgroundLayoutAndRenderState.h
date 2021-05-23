/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@protocol TSDBackgroundLayoutAndRenderStateDelegate;

@interface TSDBackgroundLayoutAndRenderState : NSObject

{
    id <TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    _Bool mNeedsLayoutAndRender;
    _Bool mNeedsLayoutForTilingLayers;
}

- (id)initWithDelegate:(id)arg1;
- (void)clearDelegate;
- (void)setNeedsLayoutForTilingLayers;
- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutAndRender;

@end
