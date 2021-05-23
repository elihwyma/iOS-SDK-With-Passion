/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <ClockKitUI/CLKUIResourceManager.h>

@protocol MTLDevice, MTLTexture;

@interface CLKUIMetalResourceManager : CLKUIResourceManager

{
    id <MTLDevice> _device;
    id <MTLTexture> _nilTexture;
}

+ (id)sharedDevice;
+ (id)sharedCommandQueue;
+ (id)sharedMetalInstance;
+ (id)sharedNilTexture;

- (id)init;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAtlases:(id)arg1;

@end
