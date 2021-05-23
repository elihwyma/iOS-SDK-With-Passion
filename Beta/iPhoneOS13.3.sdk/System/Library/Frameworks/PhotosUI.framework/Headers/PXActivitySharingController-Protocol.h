/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PXActivitySharingControllerDelegate, PXActivityViewController;

@protocol PXActivitySharingController <Swift>

@property (nonatomic, readonly) id <PXActivityViewController> activityViewController;
@property (weak, nonatomic) id <PXActivitySharingControllerDelegate> delegate;

@end
