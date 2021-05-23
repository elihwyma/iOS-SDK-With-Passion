/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class UIView;

@protocol SVCustomControlsLayoutGuideProviding;

@protocol SVCustomControlsViewProviding <Swift>

@property (nonatomic, readonly) UIView *controlsView;
@property (nonatomic, readonly) id <SVCustomControlsLayoutGuideProviding> layoutGuideProvider;

@end
