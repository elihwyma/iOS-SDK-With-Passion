/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSString;

@protocol MPAVLightweightRoutingControllerDelegate;

@interface MPAVLightweightRoutingController : NSObject

{
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    long long _discoveryMode;
    NSString *_name;
    id <MPAVLightweightRoutingControllerDelegate> _delegate;
}

@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly) NSArray *pickedRoutes;
@property (nonatomic, readonly, getter=isDevicePresenceDetected) _Bool devicePresenceDetected;
@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic) id <MPAVLightweightRoutingControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;

@end
