/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class ICDeviceManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString;

@protocol ICDeviceDelegate;

@interface ICDevice : NSObject

{
    _Bool _hasOpenSession;
    _Bool _remote;
    _Bool _autoOpenSession;
    _Bool _openSessionPending;
    _Bool _closeSessionPending;
    _Bool _preferred;
    _Bool _canCancelSoftwareInstallation;
    int _usbLocationID;
    int _usbProductID;
    int _usbVendorID;
    int _moduleExecutableArchitecture;
    int _ipPort;
    id <ICDeviceDelegate> _delegate;
    unsigned long long _type;
    NSString *_name;
    NSString *_productKind;
    struct CGImage *_icon;
    NSString *_transportType;
    NSString *_UUIDString;
    NSString *_locationDescription;
    NSMutableDictionary *_userData;
    NSString *_modulePath;
    NSString *_moduleVersion;
    NSString *_serialNumberString;
    NSString *_autolaunchApplicationPath;
    NSString *_persistentIDString;
    NSMutableSet *_deviceCapabilities;
    ICDeviceManager *_deviceManager;
    NSString *_internalUUID;
    NSNumber *_deviceHandle;
    NSString *_volumePath;
    CDUnknownBlockType _completionBlock;
    NSNumber *_connectionID;
    NSNumber *_deviceRef;
    NSNumber *_deviceID;
    NSString *_iconPath;
    NSString *_bonjourServiceType;
    NSString *_bonjourServiceName;
    NSDictionary *_bonjourTXTRecord;
    NSString *_ipAddress;
    id _userObject;
    double _softwareInstallPercentDone;
}

@property (nonatomic) struct CGImage *icon;
@property (retain, nonatomic) NSMutableSet *deviceCapabilities;
@property (retain, nonatomic) ICDeviceManager *deviceManager;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productKind;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *UUIDString;
@property (copy, nonatomic) NSString *persistentIDString;
@property (nonatomic) int usbLocationID;
@property (nonatomic) int usbProductID;
@property (nonatomic) int usbVendorID;
@property (copy, nonatomic) NSString *internalUUID;
@property (copy, nonatomic) NSNumber *deviceHandle;
@property (copy, nonatomic) NSString *volumePath;
@property (nonatomic) _Bool hasOpenSession;
@property _Bool autoOpenSession;
@property _Bool openSessionPending;
@property _Bool closeSessionPending;
@property (copy) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly) NSNumber *connectionID;
@property (nonatomic, readonly) NSNumber *deviceRef;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *iconPath;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, readonly) NSString *bonjourServiceName;
@property (nonatomic, readonly) NSDictionary *bonjourTXTRecord;
@property (nonatomic, readonly) NSString *ipAddress;
@property (nonatomic, readonly) int ipPort;
@property (retain) id userObject;
@property (readonly) _Bool preferred;
@property (readonly) double softwareInstallPercentDone;
@property (readonly) _Bool canCancelSoftwareInstallation;
@property (nonatomic, readonly) _Bool isAppleDevice;
@property (nonatomic) id <ICDeviceDelegate> delegate;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) NSString *locationDescription;
@property (nonatomic, readonly) NSMutableDictionary *userData;
@property (nonatomic, readonly) NSString *modulePath;
@property (nonatomic, readonly) NSString *moduleVersion;
@property (nonatomic, readonly) NSString *serialNumberString;
@property (copy, nonatomic) NSString *autolaunchApplicationPath;
@property (readonly, getter=isRemote) _Bool remote;
@property (readonly) int moduleExecutableArchitecture;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addCapability:(id)arg1;
- (void)requestOpenSession;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestOpenSessionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCloseSessionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)requestCloseSession;
- (void)requestEject;
- (void)removeCapability:(id)arg1;
- (_Bool)canEject;
- (void)requestEjectWithCompletion:(CDUnknownBlockType)arg1;

@end
