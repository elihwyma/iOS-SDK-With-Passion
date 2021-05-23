/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UINavigationController.h>

@class NSString, TKVibrationRecorderContentViewController;

@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController

{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;

- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithVibratorController:(id)arg1;

@end
