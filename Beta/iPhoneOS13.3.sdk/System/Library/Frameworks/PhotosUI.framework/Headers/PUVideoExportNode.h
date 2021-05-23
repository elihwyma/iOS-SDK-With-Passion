/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSProgress, NSString, NSURL, PICompositionController;

@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoExportNode : PXRunNode

{
    id <PUVideoURLNode> _videoURLNode;
    id <PUImageInfoNode> _imageInfoNode;
    unsigned long long _quality;
    PICompositionController *_compositionController;
    NSString *_livePhotoPairingIdentifier;
    NSURL *_videoURL;
    NSProgress *_exportProgress;
    struct CGSize _renderedVideoSize;
}

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSProgress *exportProgress;
@property (nonatomic, readonly) id <PUVideoURLNode> videoURLNode;
@property (nonatomic, readonly) id <PUImageInfoNode> imageInfoNode;
@property (nonatomic, readonly) unsigned long long quality;
@property (nonatomic, readonly) double progress;
@property (copy, nonatomic, readonly) PICompositionController *compositionController;
@property (copy, nonatomic, readonly) NSString *livePhotoPairingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) struct CGSize renderedVideoSize;

- (void)run;
- (void)didCancel;
- (id)_editSource;
- (id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 compositionController:(id)arg5;
- (id)_exportPresetName;
- (id)_newOutputURL;
- (void)_handleExportCompletedWithSuccess:(_Bool)arg1 editedSize:(struct CGSize)arg2 error:(id)arg3;

@end
