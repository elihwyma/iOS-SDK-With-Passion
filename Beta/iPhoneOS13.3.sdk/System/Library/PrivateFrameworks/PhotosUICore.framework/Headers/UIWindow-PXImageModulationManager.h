/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIWindow.h>

@class PXContextualNotificationCenter, PXImageModulationManager;

@interface UIWindow (PXImageModulationManager)

@property (nonatomic, readonly) PXImageModulationManager *px_imageModulationManager;
@property (nonatomic, readonly) PXContextualNotificationCenter *px_contextualNotificationCenter;

@end
