/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CLLocationManager, NSMutableArray, NSString, NSTimer, PKPaymentDeviceConfigurationData, PKSecureElement;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPaymentDevice : NSObject

{
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_metdataFetchTasks;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _skipLocationCheck;
}

@property (nonatomic) _Bool skipLocationCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInfoHTTPHeader;
+ (id)clientHardwarePlatformInfoHTTPHeader;

- (id)init;
- (void)dealloc;
- (id)configurationData;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteApplicationWithAID:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (id)primarySecureElementIdentifier;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_populateDeviceMetdata:(id)arg1 withFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)_executeDeviceMetadataFetchTasksCompletionHandlers;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)rewrapDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)trustedDeviceEnrollmentInfo;
- (void)provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)paymentDeviceMetadataFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasRegistrationRegionMap;
- (void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)SEPParingInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationDataWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
