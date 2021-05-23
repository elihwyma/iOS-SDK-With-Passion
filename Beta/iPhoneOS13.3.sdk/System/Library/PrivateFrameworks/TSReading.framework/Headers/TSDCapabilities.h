/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDCapabilities : NSObject

{
    long long _platform;
    long long _device;
    long long _renderer;
}

@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long renderer;
@property (nonatomic, readonly) _Bool isRendererH3OrBelow;
@property (nonatomic, readonly) _Bool isRendererH4OrBelow;
@property (nonatomic, readonly) _Bool isRendererH5OrBelow;
@property (nonatomic, readonly) _Bool hasLightningPort;
@property (nonatomic, readonly) struct CGSize maximumTextureSize;

+ (id)currentCapabilities;
+ (id)currentCapabilitiesOverride;
+ (void)setCurrentCapabilitiesOverride:(id)arg1;

- (id)init;
- (void)p_setupPlatform;
- (void)p_setupDevice;
- (struct CGSize)maximumHardcodedTextureSize;

@end
