/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    unsigned long long _variant;
    HMHome *_home;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
}

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)initWithIntroVariant:(unsigned long long)arg1 home:(id)arg2;
- (void)_buttonOne:(id)arg1;
- (void)_buttonTwo:(id)arg1;

@end
