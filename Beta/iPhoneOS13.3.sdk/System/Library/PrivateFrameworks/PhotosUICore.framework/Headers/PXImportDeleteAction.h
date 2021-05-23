/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXImportConcurrentAction.h>

@class NSArray, NSMutableArray, NSProgress, NSString, PXImportController;

@interface PXImportDeleteAction : PXImportConcurrentAction

{
    NSArray *_assets;
    NSMutableArray *_removedAssets;
    _Bool _userInitiatedDelete;
    NSString *_sessionUuid;
    PXImportController *_importController;
    NSProgress *_progress;
}

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) NSString *sessionUuid;
@property (weak) PXImportController *importController;
@property _Bool userInitiatedDelete;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finish;
- (id)performAction;
- (id)initWithAssets:(id)arg1;
- (_Bool)canDeleteAssets;
- (void)_preAction;
- (void)_performRealAction;
- (void)_performMockAction;
- (void)didRemove:(id)arg1;
- (void)startObservingDeleteProgress;
- (void)stopObservingDeleteProgress;
- (void)sendActionProgress:(double)arg1;

@end
