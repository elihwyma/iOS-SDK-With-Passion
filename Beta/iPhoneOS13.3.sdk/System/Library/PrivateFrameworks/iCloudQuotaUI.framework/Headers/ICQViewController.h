/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIColor, _ICQPageSpecification;

@protocol ICQPageDelegate;

@interface ICQViewController : UIViewController

{
    _ICQPageSpecification *_pageSpecification;
    UIColor *_buttonTintColor;
    id <ICQPageDelegate> _delegate;
}

@property (nonatomic, readonly) _ICQPageSpecification *pageSpecification;
@property (copy, nonatomic) UIColor *buttonTintColor;
@property (weak, nonatomic) id <ICQPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewControllerClassForPageClassIdentifier:(id)arg1;
+ (_Bool)supportsPageClassIdentifier:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPageSpecification:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;

@end
