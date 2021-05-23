/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <ClockKitUI/CLKUIAtlas.h>

@class NSObject;

@protocol MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalAtlas : CLKUIAtlas

{
    id <MTLTexture> _texture;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id <MTLTexture> _loaderQueue_prewarmedTexture;
    unsigned long long _mainQueue_prewarmState;
}

+ (id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3;

- (void)dealloc;
- (void)prewarm;
- (void)purge;
- (id)initWithUuid:(id)arg1;
- (void)bind:(id)arg1 slot:(unsigned long long)arg2;

@end
