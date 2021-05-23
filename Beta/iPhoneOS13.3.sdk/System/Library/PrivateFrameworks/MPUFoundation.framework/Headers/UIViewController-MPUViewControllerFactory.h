/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (MPUViewControllerFactory)

@property (copy, nonatomic, getter=MPU_identifier, setter=MPU_setIdentifier:) NSString *MPU_identifier;

- (id)_childViewControllerWithRestorationIdentifier:(id)arg1;
- (id)MPUViewControllerConfiguration;

@end
