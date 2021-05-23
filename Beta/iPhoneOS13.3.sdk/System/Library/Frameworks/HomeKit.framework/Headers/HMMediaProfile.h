/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessoryProfile.h>

@class HMAccessorySettings, HMHome, HMMediaSession, NSString;

@protocol HMMediaProfileDelegate;

@interface HMMediaProfile : HMAccessoryProfile

{
    NSString *_routeUID;
    id <HMMediaProfileDelegate> _delegate;
}

@property (nonatomic, readonly) NSString *routeUID;
@property (weak) id <HMMediaProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;
@property (weak, readonly) HMHome *containerHome;

- (id)init;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1;
- (void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2;

@end
