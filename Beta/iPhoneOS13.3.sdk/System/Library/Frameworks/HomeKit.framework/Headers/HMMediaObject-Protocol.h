/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/Swift-Protocol.h>

@class HMAccessorySettings, HMMediaSession;

@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <Swift>

@property (weak) id <HMMediaObjectDelegate> delegate;
@property (copy, readonly) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

@end
