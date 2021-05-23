/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIJSTelephony : IKJSObject

{
    _Bool _isObserving;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    struct __CTServerConnection *_telephonyServer;
}

@property (nonatomic, readonly, getter=isCellularRoaming) _Bool cellularRoaming;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *mobileCountryCode;
@property (nonatomic, readonly) NSString *mobileNetworkCode;
@property (nonatomic, readonly) NSString *operatorName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *providerName;

- (void)dealloc;
- (void)beginObserving;
- (id)initWithAppContext:(id)arg1;
- (struct __CTServerConnection *)_telephonyServer;
- (id)formattedPhoneNumber:(id)arg1;
- (void)sendSMSWithBodyText:(id)arg1:(id)arg2:(id)arg3;

@end
