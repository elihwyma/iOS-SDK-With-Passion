/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol PUAbstractNavigationBannerDelegate;

__attribute__((visibility("hidden")))
@interface PUAbstractNavigationBanner : NSObject

{
    id <PUAbstractNavigationBannerDelegate> _delegate;
}

@property (weak, nonatomic) id <PUAbstractNavigationBannerDelegate> delegate;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) UIView *view;

@end
