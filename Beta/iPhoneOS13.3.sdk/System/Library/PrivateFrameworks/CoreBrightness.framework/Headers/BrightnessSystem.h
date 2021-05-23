/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject

{
    BrightnessSystemInternal *bsi;
}

- (id)init;
- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (_Bool)isAlsSupported;

@end
