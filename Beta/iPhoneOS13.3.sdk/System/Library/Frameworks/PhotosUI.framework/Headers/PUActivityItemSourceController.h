/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSObject, NSOrderedSet, NSString, NSURL, PUActivityViewController, PUCMMActivityItemSource;

@protocol OS_dispatch_queue, PUActivityItemSourceControllerDelegate;

@interface PUActivityItemSourceController : PXObservable <Swift>

{
    NSMutableOrderedSet *_assetItems;
    NSMutableOrderedSet *_assetItemSources;
    NSArray *_activeItemSources;
    _Atomic int _taskId;
    unsigned long long _cloudSharedAssetCount;
    _Bool _shouldUseMomentShareLinkInMessagesIfThresholdMet;
    _Bool _shouldExcludeLivenessInAllItemSources;
    _Bool _shouldExcludeLocationInAllItemSourcess;
    _Bool _shouldShareAsOriginals;
    _Bool _momentSharePublishAttempted;
    unsigned long long _preferredPreparationType;
    id <PUActivityItemSourceControllerDelegate> _delegate;
    unsigned long long _state;
    PUActivityViewController *_activityViewController;
    CDUnknownBlockType _progressHandler;
    NSURL *_publishedURL;
    PUCMMActivityItemSource *_cmmActivityItemSource;
    NSMutableArray *_errors;
    NSString *_activeActivityType;
    unsigned long long _numSourcesDownloading;
    NSObject<OS_dispatch_queue> *_externalIsolation;
}

@property (nonatomic, readonly) PUCMMActivityItemSource *cmmActivityItemSource;
@property (copy) NSArray *activeItemSources;
@property (retain) NSMutableArray *errors;
@property (retain) NSString *activeActivityType;
@property (retain, nonatomic, setter=_setPublishedURL:) NSURL *publishedURL;
@property (nonatomic) unsigned long long numSourcesDownloading;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalIsolation;
@property (nonatomic) unsigned long long preferredPreparationType;
@property (nonatomic) _Bool shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property (weak, nonatomic) id <PUActivityItemSourceControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long state;
@property (weak, nonatomic) PUActivityViewController *activityViewController;
@property (copy, nonatomic) NSOrderedSet *assetItems;
@property (nonatomic) _Bool shouldExcludeLivenessInAllItemSources;
@property (nonatomic) _Bool shouldExcludeLocationInAllItemSourcess;
@property (nonatomic) _Bool shouldShareAsOriginals;
@property (copy, nonatomic, readonly) NSOrderedSet *assetItemSources;
@property (copy, nonatomic, readonly) NSArray *activityItems;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic, readonly) NSOrderedSet *assets;
@property (nonatomic, readonly) _Bool momentSharePublishAttempted;
@property (nonatomic, readonly) _Bool itemSourcesSupportMomentShareLinkCreation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)setState:(unsigned long long)arg1;
- (void)updateState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
- (void)cmmActivityItemSource:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3;
- (void)cmmActivityItemSource:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)updateSharingPreferencesInItemSources;
- (CDStruct_2a4d9400)synthesizedSharingPreferencesForAssetItem:(id)arg1;
- (void)addAssetItem:(id)arg1;
- (void)removeAssetItem:(id)arg1;
- (void)configureItemSourcesForActivityIfNeeded:(id)arg1 forcePreparationAsMomentShareLink:(_Bool)arg2;
- (void)_prepareIndividualItemSourcesForActivity:(id)arg1;
- (void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)arg1;
- (_Bool)_prepareForPerformWithActivityType:(id)arg1 error:(id *)arg2;
- (void)_cleanupAfterPerform;
- (void)runExplicitly:(_Bool)arg1 withActivityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishLinkForActivityType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didPublishMomentShareLinkToURL:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)activityItemSourceForAsset:(id)arg1;

@end
