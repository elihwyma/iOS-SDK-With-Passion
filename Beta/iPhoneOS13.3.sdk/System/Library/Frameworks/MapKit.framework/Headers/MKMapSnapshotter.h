/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapSnapshotOptions, NSXPCConnection, VKMapSnapshotCreator;

@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject

{
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    VKMapSnapshotCreator *_snapshotCreator;
    _Bool _needsResume;
    NSXPCConnection *_snapshotService;
}

@property (nonatomic, readonly, getter=isLoading) _Bool loading;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)cancel;
- (void)_failWithError:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancel;
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enterBackground:(id)arg1;
- (void)_exitBackground:(id)arg1;
- (void)_performSnapshot;
- (void)_cleanupSnapshotCreator;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (_Bool)_shouldShowDarkContent;
- (void)_succeedWithSnapshot:(id)arg1;

@end
