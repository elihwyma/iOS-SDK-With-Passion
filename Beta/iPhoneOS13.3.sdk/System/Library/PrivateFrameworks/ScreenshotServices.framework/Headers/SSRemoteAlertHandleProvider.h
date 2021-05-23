/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBSRemoteAlertHandle;

@protocol SSRemoteAlertHandleProviderDelegate;

@interface SSRemoteAlertHandleProvider : NSObject

{
    SBSRemoteAlertHandle *_handle;
    id <SSRemoteAlertHandleProviderDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool isActive;
@property (weak, nonatomic) id <SSRemoteAlertHandleProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void)prepare;
- (void)preheat;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)screenshotServicesAlertHandle;
- (void)_callDelegate:(CDUnknownBlockType)arg1;
- (id)_screenshotServicesServiceAlertDefinition;

@end
