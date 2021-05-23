/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIAssignToContactActivity.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString;

@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUAssignToContactActivity : UIAssignToContactActivity <Swift>

{
    id <PXActivityItemSourceController> _itemSourceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)_systemImageName;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)_embeddedActivityViewController;

@end
