/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@protocol HKOrganDonationRegistrantDelegate;

@interface HKOrganDonationRegistrant : NSObject

{
    NSMutableDictionary *_dataEntryItems;
    _Bool _hasEdits;
    id <HKOrganDonationRegistrantDelegate> _delegate;
    NSString *_email;
    NSString *_firstname;
    NSString *_middlename;
    NSString *_lastname;
    NSString *_address1;
    NSString *_address2;
    NSString *_zip;
    NSString *_city;
    NSString *_state;
    NSString *_last4SSN;
    NSString *_sex;
    NSString *_dob;
}

@property (weak, nonatomic) id <HKOrganDonationRegistrantDelegate> delegate;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *firstname;
@property (retain, nonatomic) NSString *middlename;
@property (retain, nonatomic) NSString *lastname;
@property (retain, nonatomic) NSString *address1;
@property (retain, nonatomic) NSString *address2;
@property (retain, nonatomic) NSString *zip;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *last4SSN;
@property (retain, nonatomic) NSString *sex;
@property (retain, nonatomic) NSString *dob;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) _Bool hasEdits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)organDonationRegistrantWithDemographicsInformation:(id)arg1;
+ (id)organDonationRegistrantWithJSONDictionary:(id)arg1;
+ (_Bool)_isNumericStringValid:(id)arg1 withLength:(long long)arg2;
+ (void)_loadStateInformationIfNeeded;
+ (id)exportDateFormatter;
+ (id)zipcodeNumberFormatter;
+ (id)convertLocalizedNumericStringToLatin:(id)arg1 withNumberFormatter:(id)arg2;
+ (id)ssnNumberFormatter;
+ (id)_importNumberFormatter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)_createDateOfBirthEntryItem;
- (id)_todayBirthdayDateComponents;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)dataEntryItemsValidOnly:(_Bool)arg1;
- (_Bool)isRegistrantValid;
- (void)_addDataEntryItemIntoArray:(id)arg1 validOnly:(_Bool)arg2 forField:(long long)arg3;
- (_Bool)isFieldValid:(long long)arg1;
- (id)dataEntryItemForRegistrantField:(long long)arg1;
- (unsigned long long)_placeHolderTypeForField:(long long)arg1;
- (id)_stateChoiceValues;
- (id)_stateChoiceDisplayNames;

@end
