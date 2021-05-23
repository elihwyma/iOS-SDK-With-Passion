/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIScrollView.h>

@class ISUIScrollViewVitalityController;

@interface UIScrollView (ISScrollViewVitalityController)

@property (nonatomic, readonly) ISUIScrollViewVitalityController *is_vitalityController;

- (void)is_didLayoutPlayerViews;
- (id)is_vitalityControllerCreateIfNeeded:(_Bool)arg1;
- (id)is_scrollViewDelegate;

@end
