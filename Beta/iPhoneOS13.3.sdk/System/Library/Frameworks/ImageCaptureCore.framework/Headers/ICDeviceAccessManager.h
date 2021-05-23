/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDeviceAccessManager : NSObject

{
    struct sqlite3 *_externalMediaAccessDB;
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (id)init;
- (void)dealloc;
- (id)bundleIdentifiersAccessingExternalCameras;
- (void)revokeApplicationWithBundleIdentifier:(id)arg1;
- (void)addApplicationWithBundleIdentifier:(id)arg1 whitelist:(_Bool)arg2;
- (_Bool)validateBundleIdentifier:(id)arg1 withNotification:(id)arg2;
- (_Bool)internalApplicationWithBundleIdentifierHasAccess:(id)arg1;
- (_Bool)applicationWithBundleIdentifierHasAccess:(id)arg1;
- (void)displayAlertForApplication:(id)arg1 notificationDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
