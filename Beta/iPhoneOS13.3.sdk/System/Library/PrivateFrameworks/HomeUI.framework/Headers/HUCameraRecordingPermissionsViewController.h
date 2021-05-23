/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSString, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingPermissionsViewController : HUItemTableOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_setupButton;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 home:(id)arg5;
- (void)_setupCameraRecording:(id)arg1;

@end
