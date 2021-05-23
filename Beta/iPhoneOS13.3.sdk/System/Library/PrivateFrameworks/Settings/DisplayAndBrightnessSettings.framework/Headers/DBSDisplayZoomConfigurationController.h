/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Foundation/NSObject.h>

@interface DBSDisplayZoomConfigurationController : NSObject

+ (id)defaultController;

- (id)displayZoomModes;
- (id)currentDisplayZoomMode;
- (void)setDisplayZoomMode:(id)arg1 withRelaunchURL:(id)arg2;

@end
