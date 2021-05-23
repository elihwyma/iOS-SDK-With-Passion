/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PUImportOneUpTransitionView, PXImportItemViewModel, PXImportMediaProvider;

__attribute__((visibility("hidden")))
@interface PUImportOneUpPreviewingViewController : UIViewController

{
    PXImportItemViewModel *_importItemViewModel;
    PXImportMediaProvider *_mediaProvider;
    PUImportOneUpTransitionView *_previewView;
}

@property (retain, nonatomic) PXImportItemViewModel *importItemViewModel;
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider;
@property (retain, nonatomic) PUImportOneUpTransitionView *previewView;

- (void)viewDidLoad;
- (void)updatePreferredContentSize;
- (id)initWithImportItemViewModel:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;
- (struct CGSize)sizeForImportItemViewModel:(id)arg1;

@end
