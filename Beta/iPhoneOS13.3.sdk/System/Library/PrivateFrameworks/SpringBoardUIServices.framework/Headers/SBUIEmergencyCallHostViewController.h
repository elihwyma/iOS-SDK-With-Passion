/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/_UIRemoteViewController.h>

@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController

{
    _UIBackdropView *_blurView;
    UIColor *_tintColor;
    long long _backgroundStyle;
    double _blurRadius;
    _Bool _blursSelf;
}

@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double blurRadius;
@property (nonatomic) _Bool blursSelf;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(CDUnknownBlockType)arg1;

- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;
- (void)_createAndAddBlurViewIfNecessary;

@end
