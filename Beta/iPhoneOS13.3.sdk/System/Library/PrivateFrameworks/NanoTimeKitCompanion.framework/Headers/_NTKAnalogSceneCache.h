/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, SKTexture;

@interface _NTKAnalogSceneCache : NSObject

{
    SKTexture *_faceCircleSpriteTexture;
    CLKDevice *_device;
}

+ (id)sharedInstance;
+ (void)_deallocInstance;

- (id)init;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (id)faceCircleSpriteTextureForDevice:(id)arg1;

@end
