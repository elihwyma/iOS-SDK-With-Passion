/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

@interface HKAppImageManager : NSObject <Swift>

{
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSCache *_iconCache;
    NSMutableDictionary *_outstandingRequests;
}

@property (retain) NSCache *iconCache;
@property (retain) NSMutableDictionary *outstandingRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedImageManager;
+ (id)defaultAppIcon;
+ (id)defaultAppIconTableUI;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearImageCache;
- (id)iconForSource:(id)arg1;
- (void)loadIconForSource:(id)arg1 syncHandler:(CDUnknownBlockType)arg2 asyncHandler:(CDUnknownBlockType)arg3;
- (id)iconForDevice:(id)arg1;
- (void)_queue_cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (void)_queue_loadAppIconForSource:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)_queue_synchronousLoadIconForSource:(id)arg1;
- (void)loadIconForSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_queue_researchStudyIconForSource:(id)arg1;
- (id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg1;
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;
- (void)cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (id)researchStudyIconForSource:(id)arg1;

@end
