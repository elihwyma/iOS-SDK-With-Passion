/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProgress.h>

@class NSObservation, NSURL;

@interface FPProgressProxy : NSProgress

{
    id _subscriber;
    NSURL *_fileURL;
    _Bool _shouldStopAccessingURL;
    NSObservation *_observation;
    _Bool _didSetupParentProgress;
    _Bool _updateFileCount;
}

@property (nonatomic) _Bool updateFileCount;

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)stopTrackingIfStarted;
- (void)setProgressDidSetupHandler:(CDUnknownBlockType)arg1;
- (void)startTrackingFileURL:(id)arg1 kind:(id)arg2;
- (void)_updateWithProgress:(id)arg1;

@end
