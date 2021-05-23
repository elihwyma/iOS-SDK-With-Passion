/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSArray, NSData, NSDate, NSDateComponents, NSNumber, NSString;

@interface _HKMedicalIDData : NSObject <Swift>

{
    _Bool _isDisabled;
    NSData *_pictureData;
    NSString *_name;
    NSDate *_gmtBirthdate;
    HKQuantity *_height;
    HKQuantity *_weight;
    long long _bloodType;
    NSNumber *_isOrganDonor;
    NSArray *_emergencyContacts;
    NSString *_medicalConditions;
    NSString *_medicalNotes;
    NSString *_allergyInfo;
    NSString *_medicationInfo;
    NSDate *_dateSaved;
    NSDate *_birthdate;
    long long _schemaVersion;
}

@property (retain, nonatomic) NSDate *birthdate;
@property (retain, nonatomic) NSDate *gmtBirthdate;
@property (retain, nonatomic) NSDate *dateSaved;
@property (nonatomic) long long schemaVersion;
@property (nonatomic) _Bool isDisabled;
@property (copy, nonatomic) NSData *pictureData;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDateComponents *gregorianBirthday;
@property (retain, nonatomic) HKQuantity *height;
@property (retain, nonatomic) HKQuantity *weight;
@property (nonatomic) long long bloodType;
@property (retain, nonatomic) NSNumber *isOrganDonor;
@property (copy, nonatomic) NSArray *emergencyContacts;
@property (copy, nonatomic) NSString *medicalConditions;
@property (copy, nonatomic) NSString *medicalNotes;
@property (copy, nonatomic) NSString *allergyInfo;
@property (copy, nonatomic) NSString *medicationInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_gregorianUtcCalendar;
- (_Bool)hasAnyData;
- (void)recordFieldPresenceStatistics;
- (id)consolidatedSOSContactsWithSOSContactsManager:(id)arg1;

@end
