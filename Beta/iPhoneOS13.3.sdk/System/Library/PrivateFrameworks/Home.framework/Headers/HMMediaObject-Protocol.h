/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HMAccessorySettings, HMMediaSession;

@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <Swift>

@property (weak) id <HMMediaObjectDelegate> delegate;
@property (copy, readonly) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

@end
