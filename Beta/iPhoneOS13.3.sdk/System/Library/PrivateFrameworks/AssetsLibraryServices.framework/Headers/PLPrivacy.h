/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _authStatusFullAccess;
    int _authStatusSaveOnly;
}

+ (id)sharedInstance;

- (id)init;
- (void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)isPhotosTCCAccessAllowed;
- (_Bool)isPhotosTCCAccessRestricted;
- (int)photosTCCAccessStatus;
- (struct __CFString *)_TCCForScope:(long long)arg1;
- (void)_setPreflightStatusForScope:(long long)arg1;
- (void)_setAuthStatus:(int)arg1 scope:(long long)arg2;
- (int)_authStatusForScope:(long long)arg1;
- (_Bool)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(_Bool)arg2 accessAllowedHandler:(CDUnknownBlockType)arg3;
- (_Bool)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(CDUnknownBlockType)arg2;
- (_Bool)isPhotosTCCAccessNotAllowed;

@end
