/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;

@interface SVCustomControlsViewProvider : NSObject

{
    UIView *_controlsView;
    id <SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
    id <SVVideoViewControllerProviding> _viewControllerProvider;
}

@property (nonatomic, readonly) id <SVVideoViewControllerProviding> viewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *controlsView;
@property (nonatomic, readonly) id <SVCustomControlsLayoutGuideProviding> layoutGuideProvider;

- (id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2;

@end
