/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class UIViewController;

@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider

{
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double preferredHeight;

- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
