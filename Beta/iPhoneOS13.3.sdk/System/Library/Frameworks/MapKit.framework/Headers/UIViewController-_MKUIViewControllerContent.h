/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol MKInfoCardTheme;

@interface UIViewController (_MKUIViewControllerContent)

@property (nonatomic) double contentAlpha;
@property (nonatomic) long long contentVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <MKInfoCardTheme> mk_theme;

- (void)infoCardThemeChanged;

@end
