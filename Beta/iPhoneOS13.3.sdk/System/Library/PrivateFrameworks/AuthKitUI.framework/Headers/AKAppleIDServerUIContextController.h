/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, AKServerRequestConfiguration, NSHTTPURLResponse, NSURL;

@interface AKAppleIDServerUIContextController : NSObject

{
    CDUnknownBlockType _serverUICompletion;
    NSHTTPURLResponse *_latestReadResponse;
    AKServerRequestConfiguration *_configuration;
    AKAppleIDServerResourceLoadDelegate *_serverUIDelegate;
    AKAppleIDServerUIDataHarvester *_serverDataHarvester;
    NSURL *_initiatingURL;
}

@property (nonatomic, readonly) AKAppleIDServerResourceLoadDelegate *serverUIDelegate;
@property (nonatomic, readonly) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (copy, nonatomic, readonly) NSURL *initiatingURL;

- (void)completeWithError:(id)arg1;
- (void)signRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)completeWithFinalResponse:(id)arg1;
- (id)_headerValueFromType:(unsigned long long)arg1;
- (void)_completeWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3;
- (void)tearDownContext;
- (id)initWithRequestConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleAuthKitActionAttribute:(id)arg1;
- (void)processResponse:(id)arg1;
- (void)completeWithError:(id)arg1 additionalData:(id)arg2;

@end
