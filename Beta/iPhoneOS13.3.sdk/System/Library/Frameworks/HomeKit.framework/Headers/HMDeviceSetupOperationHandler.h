/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperationHandler : NSObject

{
    HMDeviceSetupSession *_setupSession;
}

@property (nonatomic, readonly) HMDeviceSetupSession *setupSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)logIdentifier;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleReceivedRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
