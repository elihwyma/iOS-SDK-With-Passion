/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFlashlightInternal;

@interface AVFlashlight : NSObject

{
    AVFlashlightInternal *_internal;
}

@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (nonatomic, readonly, getter=isOverheated) _Bool overheated;
@property (nonatomic, readonly) float flashlightLevel;

+ (void)initialize;
+ (_Bool)hasFlashlight;

- (id)init;
- (void)dealloc;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (_Bool)turnPowerOnWithError:(id *)arg1;
- (void)turnPowerOff;
- (_Bool)setFlashlightLevel:(float)arg1 withError:(id *)arg2;
- (void)_reconnectToServer;

@end
