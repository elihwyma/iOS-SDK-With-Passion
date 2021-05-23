/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFService;

@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFService *_sfService;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleRebootSystemForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
