/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PHContentEditingOutput, PICompositionController, PUEditableMediaProvider, PUPhotoEditIrisModel, PUReviewCreateAssetNode, PUVideoExportNode;

@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUSaveReviewAssetRequest : NSObject

{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
    int _identifier;
    id <PUEditableAsset> _editableAsset;
    PUEditableMediaProvider *_editableMediaProvider;
    NSURL *_directory;
    PICompositionController *_compositionController;
    PUPhotoEditIrisModel *_irisModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
}

@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) id <PUEditableAsset> editableAsset;
@property (nonatomic, readonly) PUEditableMediaProvider *editableMediaProvider;
@property (nonatomic, readonly) NSURL *directory;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (copy, nonatomic, readonly) PUPhotoEditIrisModel *irisModel;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long workImageVersion;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) _Bool supportsProgress;
@property (nonatomic, readonly) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_transitionToState:(long long)arg1;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_imageRequestVersion;
- (long long)_videoRequestVersion;
- (void)cancelSaveOperation;
- (_Bool)_requiresVideoRender;
- (id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (void)_performInternalSaveOperation;
- (void)_performSaveOperation;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (void)_finishWithAsset:(id)arg1 error:(id)arg2;

@end
