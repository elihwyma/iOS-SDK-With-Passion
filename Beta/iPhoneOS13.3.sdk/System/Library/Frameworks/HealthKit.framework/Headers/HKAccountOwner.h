/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/Swift-Protocol.h>

@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner : HKMedicalRecord <Swift>

{
    NSString *_name;
    HKMedicalDate *_birthDate;
}

@property (copy, readonly) HKAccountOwnerType *accountOwnerType;
@property (copy, readonly) HKMedicalDate *birthDate;
@property (copy, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newAccountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 name:(id)arg11 birthDate:(id)arg12 config:(CDUnknownBlockType)arg13;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 name:(id)arg11 birthDate:(id)arg12;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 name:(id)arg10 birthDate:(id)arg11;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setName:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setBirthDate:(id)arg1;

@end
