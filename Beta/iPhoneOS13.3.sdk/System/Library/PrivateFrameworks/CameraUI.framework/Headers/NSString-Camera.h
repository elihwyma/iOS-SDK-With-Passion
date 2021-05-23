/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSString.h>

@interface NSString (Camera)

@property (copy, readonly) NSString *cam_uppercaseStringWithPreferredLocale;
@property (copy, readonly) NSString *cam_capitalizedStringWithPreferredLocale;

+ (id)cam_localizedTitleForMode:(long long)arg1 wantsCompactTitle:(_Bool)arg2;

@end
