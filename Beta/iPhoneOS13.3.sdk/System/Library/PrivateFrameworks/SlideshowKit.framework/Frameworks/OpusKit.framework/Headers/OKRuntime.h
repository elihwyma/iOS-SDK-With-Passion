/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@interface OKRuntime : NSObject

+ (unsigned long long)currentPlatform;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)stringForPlatforms:(unsigned long long)arg1;
+ (id)opusKitBundle;
+ (id)currentPlatformStringWithDisplayScale;
+ (id)resolutionStringWithSize:(struct CGSize)arg1;
+ (id)resolutionStringWithSize:(struct CGSize)arg1 andPlatforms:(unsigned long long)arg2;
+ (id)resolutionStringWithSize:(struct CGSize)arg1 keepAspectRatio:(_Bool)arg2;
+ (id)resolutionStringWithSize:(struct CGSize)arg1 keepAspectRatio:(_Bool)arg2 andPlatforms:(unsigned long long)arg3;

@end
