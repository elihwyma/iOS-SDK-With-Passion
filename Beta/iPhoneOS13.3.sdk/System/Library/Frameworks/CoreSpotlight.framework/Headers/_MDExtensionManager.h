/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSDictionary, NSString, _MDExtensionLoader;

@protocol OS_dispatch_queue;

@interface _MDExtensionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_notifyQueue;
    _MDExtensionLoader *_extensionLoader;
    NSDictionary *_indexExtensionsByBundleID;
    NSDictionary *_fileProviderBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSCondition *_extensionsCondition;
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    long long _loaderCallbackCount;
}

@property (retain, nonatomic) _MDExtensionLoader *extensionLoader;
@property (retain, nonatomic) NSDictionary *indexExtensionsByBundleID;
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCondition *extensionsCondition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionManagerQueue;
@property (nonatomic) long long loaderCallbackCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)extensions;
- (void)findExtensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueueName:(const char *)arg1;
- (void)_notifyForLoadedExtensions;
- (void)loadExtensions;
- (void)_waitForLoadLocked;
- (id)allExtensionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_willRunJobWithBundleID:(id)arg1;
- (void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_didRetryJobWithBundleID:(id)arg1;
- (id)anyExtensionWithBlock:(CDUnknownBlockType)arg1;
- (void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
