/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBBatteryWidgetVisibilityController : NSObject

+ (id)sharedInstance;

- (id)init;
- (_Bool)_isVisible;
- (void)_connectedDevicesDidChange;
- (_Bool)_isAlwaysVisible;
- (_Bool)_containsExternalBattery;
- (void)_setVisibleIfNecessary:(_Bool)arg1;
- (void)_makeVisible;

@end
