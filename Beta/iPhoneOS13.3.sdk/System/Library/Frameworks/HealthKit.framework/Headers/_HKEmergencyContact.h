/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface _HKEmergencyContact : NSObject <Swift>

{
    NSString *_name;
    NSNumber *_nameRecordID;
    NSString *_nameContactIdentifier;
    NSString *_phoneNumber;
    NSNumber *_phoneNumberPropertyID;
    NSString *_phoneNumberContactIdentifier;
    NSString *_phoneNumberLabel;
    NSString *_relationship;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *nameRecordID;
@property (copy, nonatomic) NSString *nameContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *phoneNumberPropertyID;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberLabel;
@property (copy, nonatomic) NSString *relationship;

+ (_Bool)supportsSecureCoding;
+ (id)nameForContact:(id)arg1;
+ (id)emergencyContactWithContact:(id)arg1 property:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
