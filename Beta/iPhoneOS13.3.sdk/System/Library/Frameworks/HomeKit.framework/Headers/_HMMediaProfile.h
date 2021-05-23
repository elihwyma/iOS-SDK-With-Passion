/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMAccessoryProfile.h>

@class HMMediaSession, NSString;

@protocol _HMMediaProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMMediaProfile : _HMAccessoryProfile

{
    HMMediaSession *_mediaSession;
    NSString *_routeUID;
    id <_HMMediaProfileDelegate> _delegate;
}

@property (retain) HMMediaSession *mediaSession;
@property (readonly) NSString *routeUID;
@property (weak) id <_HMMediaProfileDelegate> delegate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRouteUID:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;

@end
