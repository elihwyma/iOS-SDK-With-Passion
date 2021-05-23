/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditExtensionActivityViewController : UIActivityViewController

{
    id <PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;
}

@property (weak, nonatomic) id <PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;

- (void)_performActivity:(id)arg1;
- (_Bool)_shouldUseModernDesign;
- (_Bool)isPhotosOrCamera;
- (_Bool)appWantsLargePreview;

@end
