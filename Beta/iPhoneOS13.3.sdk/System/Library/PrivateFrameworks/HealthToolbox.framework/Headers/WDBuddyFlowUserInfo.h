/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSDateComponents, NSMutableDictionary, NSNumber, NSString;

@protocol WDBuddyFlowUserInfoDelegate;

__attribute__((visibility("hidden")))
@interface WDBuddyFlowUserInfo : NSObject

{
    NSMutableDictionary *_dataEntryItems;
    id <WDBuddyFlowUserInfoDelegate> _delegate;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    NSNumber *_sex;
    NSNumber *_heightInCm;
    NSNumber *_weightInKg;
    NSNumber *_originalHeightInCm;
    NSNumber *_originalWeightInKg;
}

@property (retain, nonatomic) NSNumber *originalHeightInCm;
@property (retain, nonatomic) NSNumber *originalWeightInKg;
@property (weak, nonatomic) id <WDBuddyFlowUserInfoDelegate> delegate;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (retain, nonatomic) NSNumber *sex;
@property (retain, nonatomic) NSNumber *heightInCm;
@property (retain, nonatomic) NSNumber *weightInKg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_medicalIDName;
- (id)_dataEntryItemForRegistrantField:(unsigned long long)arg1;
- (id)_createDateOfBirthEntryItem;
- (id)_createSexEntryItem;
- (id)_todayBirthdayDateComponents;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)defaultDataEntryItems;
- (id)medicalIDRepresentation;
- (void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2;

@end
