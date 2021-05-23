/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VUIAggregateMediaLibrary, VUIDeviceMediaLibrary, VUIMediaLibrary, VUISidebandMediaLibrary;

@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManager;

@interface VUIMediaLibraryManager : NSObject

{
    VUIMediaLibrary *_activeMediaLibrary;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    VUIDeviceMediaLibrary *_deviceMediaLibrary;
    VUISidebandMediaLibrary *_sidebandMediaLibrary;
    VUIAggregateMediaLibrary *_aggregateMediaLibrary;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSObject<VUIHomeShareMediaLibraryManager> *_homeShareManager;
}

@property (retain, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (retain, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary;
@property (retain, nonatomic) VUIAggregateMediaLibrary *aggregateMediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSObject<VUIHomeShareMediaLibraryManager> *homeShareManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (copy, nonatomic, readonly) NSArray *homeShareMediaLibraries;
@property (retain, nonatomic) VUIMediaLibrary *activeMediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(_Bool)arg1;

- (id)init;
- (id)_deviceMediaLibrary;
- (id)_homeShareMediaLibraryManager;
- (id)_mediaLibraryForIdentifier:(id)arg1;
- (void)_postHomeShareMediaLibrariesDidChangeNotificationWithMediaLibraries:(id)arg1 andChangeSet:(id)arg2;
- (void)_enqueueStrongSelfCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)homeShareManager:(id)arg1 mediaLibrariesDidUpdate:(id)arg2 withChangeSet:(id)arg3;
- (void)beginDiscoveringHomeShareMediaLibraries;
- (void)endDiscoveringHomeShareMediaLibraries;
- (id)mediaLibraryForIdentifier:(id)arg1;

@end
