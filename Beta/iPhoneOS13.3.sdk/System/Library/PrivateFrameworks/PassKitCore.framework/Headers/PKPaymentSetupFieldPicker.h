/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

{
    NSArray *_pickerItems;
}

@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;

- (id)displayString;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (void)updateWithAttribute:(id)arg1;
- (id)_submissionStringForValue:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;

@end
