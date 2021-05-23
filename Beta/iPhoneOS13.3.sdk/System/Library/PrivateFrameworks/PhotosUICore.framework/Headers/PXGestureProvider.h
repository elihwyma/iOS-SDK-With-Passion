/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIView;

@protocol PXGestureProviderDelegate;

@interface PXGestureProvider : NSObject

{
    NSArray *_gestureRecognizers;
    id <PXGestureProviderDelegate> _delegate;
    UIView *_hostingView;
}

@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (weak, nonatomic) id <PXGestureProviderDelegate> delegate;
@property (weak, nonatomic) UIView *hostingView;

- (void)hostingViewDidChange;

@end
