/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NRDevice, NSUUID;

@interface CLKDevice : NSObject

{
    _Bool _runningGraceOrLater;
    _Bool _isLuxo;
    _Bool _supportsTritium;
    _Bool _isZeusBlack;
    _Bool _limitedToPreGlory;
    _Bool _isBridgeActive;
    _Bool _isExplorer;
    _Bool _hasRichMediaComplications;
    _Bool _supportsUrsa;
    int _pairedDeviceCapabilitiesChangeNotificationToken;
    struct os_unfair_lock_s _capabilitiesLock;
    unsigned long long _version;
    unsigned long long _sizeClass;
    double _screenScale;
    double _screenCornerRadius;
    unsigned long long _collectionType;
    unsigned long long _materialType;
    NRDevice *_nrDevice;
    struct CGRect _screenBounds;
}

@property (nonatomic, readonly) int pairedDeviceCapabilitiesChangeNotificationToken;
@property (nonatomic, readonly) struct os_unfair_lock_s capabilitiesLock;
@property (retain, nonatomic) NRDevice *nrDevice;
@property (nonatomic) _Bool isBridgeActive;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) struct CGRect screenBounds;
@property (nonatomic) double screenScale;
@property (nonatomic) double screenCornerRadius;
@property (nonatomic) _Bool isLuxo;
@property (nonatomic) _Bool isExplorer;
@property (nonatomic) _Bool hasRichMediaComplications;
@property (nonatomic) _Bool supportsUrsa;
@property (nonatomic) unsigned long long materialType;
@property (nonatomic) unsigned long long collectionType;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) _Bool supportsTritium;
@property (nonatomic, readonly) _Bool isZeusBlack;
@property (nonatomic, readonly, getter=isRunningGraceOrLater) _Bool runningGraceOrLater;
@property (nonatomic, readonly) _Bool isLocked;
@property (nonatomic, readonly) _Bool unlockedSinceBoot;
@property (nonatomic, readonly) NSUUID *nrDeviceUUID;
@property (nonatomic, readonly) unsigned int nrDeviceVersion;
@property (nonatomic, readonly) _Bool limitedToPreGlory;

+ (void)initialize;
+ (id)currentDevice;
+ (void)setCurrentDevice:(id)arg1;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)activeNRDevice;
+ (id)deviceForNRDevice:(id)arg1 forced:(_Bool)arg2;
+ (void)_deviceDidBecomeActive;
+ (void)_resetCurrentDevice;
+ (id)nrDeviceForNRDeviceUUID:(id)arg1;
+ (id)_cachedDeviceForUUID:(id)arg1;
+ (id)deviceForNRDeviceUUID:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNRDevice:(id)arg1;
- (void)_loadDeviceInfo;
- (_Bool)_queryAndCacheNanoRegistryDeviceCapabilities;

@end
