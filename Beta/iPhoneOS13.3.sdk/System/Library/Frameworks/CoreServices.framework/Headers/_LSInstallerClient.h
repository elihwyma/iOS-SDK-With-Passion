/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _LSInstallerClient : NSObject

{
    _Bool _uninstaller;
    unsigned long long _operationType;
    NSString *_operationTypeString;
    NSXPCConnection *_connection;
    CDUnknownBlockType _progressBlock;
    NSString *_bundleID;
    NSURL *_bundleURL;
    NSDictionary *_options;
    NSObject<OS_dispatch_group> *_callbackDeliveryGroup;
    struct os_unfair_lock_s _lock;
    _Bool _allCallbacksDeleviered;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic, readonly) NSString *operationTypeString;
@property (nonatomic, getter=isUninstaller) _Bool uninstaller;
@property (readonly) _Bool allCallbacksDeleviered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)_invalidate;
- (void)_beginOperation;
- (void)_waitForAllCallbackMessagesToExecute;
- (void)updateCallbackWithData:(id)arg1;
- (void)callbackDeliveryComplete;

@end
