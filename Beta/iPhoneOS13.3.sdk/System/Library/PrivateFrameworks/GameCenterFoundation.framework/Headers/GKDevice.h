/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKEventEmitter, NSString;

@protocol GKLockStatusObserver;

@interface GKDevice : NSObject

{
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_gameKitVersion;
    _Bool _gameKitAvailable;
    GKEventEmitter<GKLockStatusObserver> *_emitter;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic, readonly) NSString *udid;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSString *gameKitVersion;
@property (nonatomic, readonly, getter=isGameKitAvailable) _Bool gameKitAvailable;

+ (id)currentDevice;

- (id)init;
- (void)dealloc;
- (id)userAgent;
- (void)_initPlatform;
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;
- (id)_platformUDID;
- (void)stopObservingKeyBagStatus;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;
- (id)processNameHeader;
- (id)storeUserAgent;
- (id)protocolVersionHeader;
- (id)buildVersionHeader;
- (id)platformBuildVersion;
- (void)addLockStatusObserver:(id)arg1;
- (void)removeLockStatusObserver:(id)arg1;
- (_Bool)isDevelopmentDevice;
- (_Bool)isFocusDevice;
- (_Bool)isProductType:(unsigned int)arg1;

@end
