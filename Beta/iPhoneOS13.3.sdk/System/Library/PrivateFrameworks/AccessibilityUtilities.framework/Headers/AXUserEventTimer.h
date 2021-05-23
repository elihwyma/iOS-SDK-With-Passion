/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXUserEventTimer : NSObject

+ (id)sharedInstance;

- (void)userEventOccurred;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;

@end
