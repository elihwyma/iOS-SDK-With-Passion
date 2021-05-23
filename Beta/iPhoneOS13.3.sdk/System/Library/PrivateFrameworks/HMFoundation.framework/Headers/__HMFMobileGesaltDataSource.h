/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMACAddress, HMFSoftwareVersion, HMFUnfairLock, NSObject, NSString;

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMobileGesaltDataSource

{
    HMFUnfairLock *_lock;
    _Bool _supportsBLE;
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_model;
    NSString *_regionInfo;
    NSString *_serialNumber;
    long long _productPlatform;
    long long _productClass;
    long long _productVariant;
    HMFSoftwareVersion *_softwareVersion;
    HMFMACAddress *_WiFiInterfaceMACAddress;
    NSObject<OS_dispatch_queue> *_queue;
    struct MGNotificationTokenStruct *_notificationToken;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct MGNotificationTokenStruct *notificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) id <HMFSystemInfoNameDataSourceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *model;
@property (copy, nonatomic, readonly) NSString *regionInfo;
@property (copy, nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) long long productPlatform;
@property (nonatomic, readonly) long long productClass;
@property (nonatomic, readonly) long long productVariant;
@property (copy, nonatomic, readonly) NSString *modelIdentifier;
@property (copy, nonatomic, readonly) HMFSoftwareVersion *softwareVersion;
@property (copy, readonly) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly) _Bool supportsBLE;

- (id)init;
- (void)dealloc;

@end
