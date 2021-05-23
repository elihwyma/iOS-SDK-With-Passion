/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UILayoutGuide;

@protocol SVVideoViewControllerProviding;

@interface SVCustomControlsLayoutGuideProvider : NSObject

{
    UILayoutGuide *_accessoryBarLayoutGuide;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (retain, nonatomic) UILayoutGuide *accessoryBarLayoutGuide;
@property (retain, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UILayoutGuide *transportControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *displayModeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *volumeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredTopAreaLayoutGuide;

- (id)initWithViewControllerProvider:(id)arg1 accessoryBarView:(id)arg2;

@end
