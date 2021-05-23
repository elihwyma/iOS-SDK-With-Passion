/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKClinicalBrand, NSString, NSURL;

@interface HKClinicalGateway : NSObject <Swift>

{
    NSString *_externalID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_displayableDescription;
    NSString *_phoneNumber;
    NSURL *_informationURL;
    NSURL *_passwordResetURL;
    NSURL *_patientPortalURL;
    NSURL *_signupURL;
    long long _status;
    long long _type;
    HKClinicalBrand *_brand;
}

@property (copy, nonatomic, readonly) NSString *externalID;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *displayableDescription;
@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (copy, nonatomic, readonly) NSURL *informationURL;
@property (copy, nonatomic, readonly) NSURL *passwordResetURL;
@property (copy, nonatomic, readonly) NSURL *patientPortalURL;
@property (copy, nonatomic, readonly) NSURL *signupURL;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) HKClinicalBrand *brand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 displayableDescription:(id)arg4 phoneNumber:(id)arg5 informationURL:(id)arg6 passwordResetURL:(id)arg7 patientPortalURL:(id)arg8 signupURL:(id)arg9 status:(long long)arg10 type:(long long)arg11 brand:(id)arg12;

@end
