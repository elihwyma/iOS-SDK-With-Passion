/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject

{
    _Bool _isCameraRunning;
    PLForegroundMonitor *_foregroundMonitor;
}

@property (nonatomic, readonly) PLForegroundMonitor *foregroundMonitor;
@property (nonatomic, readonly) _Bool isCameraRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;

@end
