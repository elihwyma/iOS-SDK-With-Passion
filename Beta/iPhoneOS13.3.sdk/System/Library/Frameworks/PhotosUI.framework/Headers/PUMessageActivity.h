/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIMessageActivity.h>

@class NSString;

@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMessageActivity : UIMessageActivity

{
    id <PXActivityItemSourceController> _itemSourceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

+ (_Bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;

- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)performActivity;
- (void)_prepareWithMomentShareLink:(id)arg1;

@end
