/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCExtendedGamepad, GCGamepad, GCMicroGamepad, GCMotion, GCStereoAR, NSMutableArray, NSString;

@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCController : NSObject

{
    NSString *_description;
    _Bool _allHIDDevicesConnected;
    _Bool _forwarded;
    _Bool _snapshot;
    _Bool _physicalDeviceUsesCompass;
    _Bool _published;
    unsigned int _service;
    NSString *_vendorName;
    NSString *_debugName;
    CDUnknownBlockType _controllerPausedHandler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    long long _playerIndex;
    NSString *_productCategory;
    id <GCNamedProfile> _profile;
    NSMutableArray *_hidServices;
    NSString *_physicalDeviceUniqueID;
    unsigned long long _deviceHash;
}

@property (copy, nonatomic) CDUnknownBlockType __deprecated_controllerPausedHandler;
@property (copy, nonatomic) NSString *vendorName;
@property (retain, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *debugName;
@property (retain, nonatomic) id <GCNamedProfile> profile;
@property (retain, nonatomic) NSMutableArray *hidServices;
@property (nonatomic) unsigned int service;
@property (retain, nonatomic) NSString *physicalDeviceUniqueID;
@property (nonatomic) _Bool physicalDeviceUsesCompass;
@property (nonatomic) unsigned long long deviceHash;
@property (nonatomic, getter=isForwarded) _Bool forwarded;
@property (getter=areAllHIDDevicesConnected) _Bool allHIDDevicesConnected;
@property (getter=isPublished) _Bool published;
@property (retain, nonatomic, readonly) GCStereoAR *stereoAR;
@property (copy, nonatomic) CDUnknownBlockType controllerPausedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, readonly, getter=isAttachedToDevice) _Bool attachedToDevice;
@property (readonly, getter=isSnapshot) _Bool snapshot;
@property (nonatomic) long long playerIndex;
@property (retain, nonatomic, readonly) GCGamepad *gamepad;
@property (retain, nonatomic, readonly) GCMicroGamepad *microGamepad;
@property (retain, nonatomic, readonly) GCExtendedGamepad *extendedGamepad;
@property (retain, nonatomic, readonly) GCMotion *motion;

+ (_Bool)supportsSecureCoding;
+ (id)controllers;
+ (void)__daemon__appDidEnterBackground;
+ (void)__daemon__appWillEnterForeground;
+ (id)controllerWithMicroGamepad;
+ (id)controllerWithExtendedGamepad;
+ (id)controllerWithStereoAR;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(_Bool)arg1 btClassic:(_Bool)arg2 btle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)__open__;
+ (void)__openXPC__;
+ (void)__openXPC_and_CBApplicationDidBecomeActive__;
+ (void)__setLogger__:(CDUnknownBlockType)arg1;
+ (void)__daemon__startBonjourService;
+ (void)__daemon__setUserActivityUserInfo:(id)arg1;
+ (void)__daemon__requestConnectedHostUpdatesWithHandler:(CDUnknownBlockType)arg1;
+ (void)__daemon__addController:(id)arg1;
+ (void)__daemon__removeController:(id)arg1;
+ (void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)stopWirelessControllerDiscovery;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (unsigned int)sampleRate;
- (id)capture;
- (_Bool)supportsMotionLite;
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)addServiceRefs:(id)arg1;
- (void)clearServiceRef;
- (_Bool)displayTrueSiriRemoteName;
- (_Bool)hasServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)_setSnapshot:(_Bool)arg1;
- (_Bool)isEqualToController:(id)arg1;
- (void *)createInputBufferForDevice:(struct __IOHIDDevice *)arg1 withSize:(unsigned long long)arg2;

@end
