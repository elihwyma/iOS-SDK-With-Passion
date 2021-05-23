/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class MarkupViewController, NSString, NSURL, PUMediaProvider, PUObserverRegistry, PUReviewAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoMarkupViewController : UIViewController

{
    PUReviewAsset *_reviewAsset;
    PUMediaProvider *_mediaProvider;
    MarkupViewController *__markupViewController;
    PUObserverRegistry *__observerRegistry;
    long long __sourceImageVersion;
    NSURL *__workaroundInputWriteURL;
}

@property (nonatomic, readonly) MarkupViewController *_markupViewController;
@property (nonatomic, readonly) PUObserverRegistry *_observerRegistry;
@property (nonatomic, setter=_setSourceImageVersion:) long long _sourceImageVersion;
@property (copy, nonatomic, setter=_setWorkaroundInputWriteURL:) NSURL *_workaroundInputWriteURL;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)arg1;

@end
