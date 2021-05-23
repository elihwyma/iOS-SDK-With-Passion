/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSObject, NSString;

@protocol HMFWiFiManagerDataSourceDelegate, OS_dispatch_queue;

@interface HMFWiFiManagerDataSource

{
    id <HMFWiFiManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __WiFiManagerClient *_wifiClientReference;
    struct __WiFiDeviceClient *_wifiDeviceReference;
    struct __WiFiNetwork *_currentNetwork;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) struct __WiFiManagerClient *wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient *wifiDeviceReference;
@property (nonatomic) struct __WiFiNetwork *currentNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HMFWiFiManagerDataSourceDelegate> delegate;
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) _Bool wowAsserted;
@property (copy, nonatomic, readonly) NSString *currentNetworkSSID;

+ (id)MACAddressString;

- (void)dealloc;
- (void)_setCurrentNetwork:(struct __WiFiNetwork *)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (void)performBlockAfterWoWReassertionDelay:(CDUnknownBlockType)arg1;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient *)arg1;
- (void)handleWiFiLinkChangedWithEventDictionary:(id)arg1;

@end
