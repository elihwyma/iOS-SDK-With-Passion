/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class UILayoutGuide;

@protocol SVCustomControlsLayoutGuideProviding <Swift>

@property (nonatomic, readonly) UILayoutGuide *transportControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *displayModeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *volumeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredTopAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *accessoryBarLayoutGuide;

@end
