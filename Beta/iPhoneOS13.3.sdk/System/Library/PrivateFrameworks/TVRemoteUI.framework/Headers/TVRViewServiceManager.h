/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString, SBSRemoteAlertHandle, TVRViewServiceConfigContext;

@interface TVRViewServiceManager : NSObject

{
    TVRViewServiceConfigContext *_viewServiceContext;
    SBSRemoteAlertHandle *_alertHandle;
    NSString *_lastActiveEndpointIdentifier;
}

@property (retain, nonatomic) TVRViewServiceConfigContext *viewServiceContext;
@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)prewarm;
- (void)dismiss;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)_actionForSetting:(unsigned long long)arg1 animationBlock:(CDUnknownBlockType)arg2;
- (void)_prewarmWithLaunchViewService:(_Bool)arg1 fetchActiveEndpoint:(_Bool)arg2;
- (void)_launchViewServiceSuspended;
- (void)_fetchActiveEndpointUID;
- (void)presentWithContext:(id)arg1;
- (id)_settingNameForValue:(unsigned long long)arg1;

@end
