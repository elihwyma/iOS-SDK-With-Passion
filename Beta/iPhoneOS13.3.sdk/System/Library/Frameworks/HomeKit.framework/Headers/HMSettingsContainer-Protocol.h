/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/Swift-Protocol.h>

@class HMSettings;

@protocol HMSettingsContainer <Swift>

@property (readonly) HMSettings *settings;
@property (readonly) HMSettings *privateSettings;

@end
