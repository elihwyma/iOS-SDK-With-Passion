/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TCSBehavior : NSObject

{
    int _firstUnlockToken;
    _Bool _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
    _Bool _isAppleInternalInstall;
    _Bool _isM8Device;
    NSString *_regionCode;
}

@property (nonatomic, readonly) _Bool isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (nonatomic, readonly) _Bool isAppleInternalInstall;
@property (nonatomic, readonly) _Bool isM8Device;
@property (nonatomic, readonly) NSString *regionCode;

+ (id)regionCode;
+ (id)_regionCode;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (id)sharedBehavior;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (_Bool)_isM8Device;
+ (_Bool)isM8Device;

- (id)init;
- (void)dealloc;
- (void)_handleDeviceFirstUnlock;

@end
