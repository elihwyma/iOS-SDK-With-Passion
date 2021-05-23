/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSProgress, NUComposition, PHAsset, PHContentEditingOutput, PICompositionController, PUPhotoEditIrisModel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSaveRequest : NSObject

{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    _Bool _useRawIfAvailable;
    NSProgress *_videoExportProgress;
    int _identifier;
    PHAsset *_photo;
    PICompositionController *_compositionController;
    NUComposition *_originalComposition;
    PUPhotoEditIrisModel *_irisModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
}

@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) PHAsset *photo;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (nonatomic, readonly) NUComposition *originalComposition;
@property (copy, nonatomic, readonly) PUPhotoEditIrisModel *irisModel;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long workImageVersion;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) _Bool supportsProgress;
@property (nonatomic, readonly) double progress;

- (id)init;
- (void)_transitionToState:(long long)arg1;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5;
- (id)initWithPhoto:(id)arg1 compositionController:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(_Bool)arg7;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_imageRequestVersion;
- (long long)_videoRequestVersion;
- (void)_performSaveEditsOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performRevertToOriginalOperation;
- (void)cancelSaveOperation;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)_requiresVideoRender;

@end
