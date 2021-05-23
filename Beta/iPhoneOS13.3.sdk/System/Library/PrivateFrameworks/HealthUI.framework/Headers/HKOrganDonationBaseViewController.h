/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTitledBuddyViewController.h>

@class NSString, _HKMedicalIDData;

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController

{
    _HKMedicalIDData *_medicalIDData;
    NSString *_completionButtonTitle;
    CDUnknownBlockType _registrationCompletionHandler;
}

@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType registrationCompletionHandler;

- (id)initWithMedicalIDData:(id)arg1;

@end
