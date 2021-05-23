/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@interface IMLocationManagerUtils : NSObject

+ (id)sharedInstance;

- (void)sendCurrentLocationMessageWithChat:(id)arg1 withLocationManager:(id)arg2 withSourceApplicationIdentifier:(id)arg3 foregroundAssertionForBundleIdentifier:(id)arg4;

@end
