/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AIDAAccountManager, AKAppleIDAuthenticationController, NSArray, NSError;

@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject

{
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
    NSArray *_devices;
    NSError *_loadError;
    id <AADeviceListDelegate> _delegate;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSError *loadError;
@property (weak, nonatomic) id <AADeviceListDelegate> delegate;

- (id)_accountStore;
- (id)_appleAccount;
- (void)refreshDeviceList;
- (void)_setDeviceList:(id)arg1 loadError:(id)arg2;
- (void)_loadDeviceList;
- (void)_loadRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_createRequestForAccount:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (id)_authController;
- (void)_renewCredentials;
- (id)_aidaAccount;
- (id)initWithAccountManager:(id)arg1;

@end
