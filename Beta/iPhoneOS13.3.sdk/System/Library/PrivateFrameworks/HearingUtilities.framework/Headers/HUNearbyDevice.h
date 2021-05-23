/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSMutableDictionary, NSSet, RPCompanionLinkClient, RPCompanionLinkDevice;

@interface HUNearbyDevice : NSObject

{
    _Bool _activating;
    _Bool _shouldTrack;
    RPCompanionLinkDevice *_device;
    unsigned long long _connectionStatus;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_previousMessageCache;
    NSSet *_cachableKeys;
}

@property (retain) RPCompanionLinkClient *client;
@property (nonatomic, getter=isActivating) _Bool activating;
@property (nonatomic) _Bool shouldTrack;
@property (retain, nonatomic) NSMutableDictionary *previousMessageCache;
@property (retain, nonatomic) NSSet *cachableKeys;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (nonatomic) unsigned long long connectionStatus;

+ (id)nearbyDeviceWithPeerDevice:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)name;
- (id)identifier;
- (void)stop;
- (void)reset;
- (void)sendMessage:(id)arg1;
- (_Bool)representsPeerDevice:(id)arg1;
- (void)purgeMessageCache;
- (_Bool)representsAWatch;
- (id)initWithPeerDevice:(id)arg1;
- (void)setupSessionIfNecessary;

@end
