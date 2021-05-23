/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

@class NSArray, NSString, PXPeopleDetailStatusOverlayView, UIScrollView;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController

{
    _Bool _processingFaces;
    NSArray *_people;
    PXPeopleDetailStatusOverlayView *_overlayView;
    UIScrollView *_overlayScrollView;
    NSArray *_overlayConstraints;
}

@property (nonatomic, getter=isProcessingFaces) _Bool processingFaces;
@property (retain, nonatomic) NSArray *people;
@property (retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView;
@property (retain, nonatomic) UIScrollView *overlayScrollView;
@property (retain, nonatomic) NSArray *overlayConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)_applicationBecameActive:(id)arg1;
- (void)_updateHeader;
- (void)_suggestionsDidFinish:(id)arg1;
- (_Bool)shouldUpdateStatusBarTitle;
- (void)_loadComposition;
- (id)initWithPeople:(id)arg1;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)arg1;
- (id)_fetchRefreshedPeople:(id)arg1;
- (void)refreshName;
- (void)_createNewDetailView:(id)arg1;
- (void)_setupProcessingOverlayView;
- (void)_updateOverlayContentSizeIfNeeded;
- (void)_updateOverlayConstraintsIfNeeded;
- (void)_setupHeader;
- (void)_launchNaming:(id)arg1;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;

@end
