/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@interface ADLockScreenManager : NSObject

+ (id)sharedManager;

- (_Bool)isDeviceLocked;
- (void)requestPassCodeUnlockUIWithBlock:(CDUnknownBlockType)arg1;

@end
