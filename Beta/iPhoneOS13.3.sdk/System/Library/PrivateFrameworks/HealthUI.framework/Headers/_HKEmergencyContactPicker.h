/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@protocol _HKEmergencyContactPickerDelegate;

@interface _HKEmergencyContactPicker : NSObject

{
    UIViewController *_owningViewController;
    id <_HKEmergencyContactPickerDelegate> _delegate;
}

@property (retain, nonatomic) UIViewController *owningViewController;
@property (weak, nonatomic) id <_HKEmergencyContactPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOwningViewController:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)_meContactIdentifier;
- (void)presentEmergencyContactPickerForMedicalIDData:(id)arg1;

@end
