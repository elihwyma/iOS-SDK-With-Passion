//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField
{
    NSArray *_pickerItems;
}

@property(copy, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
// - (void).cxx_destruct;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
@property(copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue; // @dynamic currentValue;
- (void)_commonUpdate;
- (void)updateWithConfiguration:(id)arg1;
- (NSUInteger)fieldType;

@end

