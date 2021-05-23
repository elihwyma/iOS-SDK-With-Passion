/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class FigCameraViewfinder, NSString;

@protocol PLBackgroundJobCameraWatcherDelegate;

@interface PLBackgroundJobCameraWatcher : NSObject

{
    FigCameraViewfinder *_viewFinder;
    _Bool _isCameraRunning;
    id <PLBackgroundJobCameraWatcherDelegate> _delegate;
}

@property (weak, readonly) id <PLBackgroundJobCameraWatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (_Bool)isCameraRunning;

@end
