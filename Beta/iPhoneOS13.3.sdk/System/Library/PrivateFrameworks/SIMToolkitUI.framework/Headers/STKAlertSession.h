/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SBSRemoteAlertHandle, STKSessionAction;

@protocol OS_os_log, STKAlertSessionResponseProvider, STKSound;

@interface STKAlertSession : NSObject

{
    struct os_unfair_lock_s _lock;
    id <STKAlertSessionResponseProvider> _responseProvider;
    SBSRemoteAlertHandle *_alertHandle;
    STKSessionAction *_alertAction;
    _Bool _needsResponse;
    _Bool _invalidated;
    NSObject<OS_os_log> *_logger;
    NSDictionary *_options;
    id <STKSound> _sound;
}

@property (nonatomic, readonly) _Bool hasSentResponse;
@property (nonatomic, readonly) NSDictionary *options;
@property (retain, nonatomic) id <STKSound> sound;
@property (nonatomic, readonly) STKSessionAction *alertAction;
@property (nonatomic, readonly) SBSRemoteAlertHandle *alertHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_requiresResponseProvider;

- (void)dealloc;
- (void)invalidate;
- (void)sendResponse:(long long)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)presentRemoteAlertHandle:(id)arg1 withAction:(id)arg2;
- (void)_lock_sendResponse:(long long)arg1;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4;

@end
