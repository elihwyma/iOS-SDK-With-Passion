/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject

{
    _Bool _wasRelogin;
    HKClinicalAccount *_account;
    NSNumber *_alternateCredentialPersistentID;
}

@property (nonatomic, readonly) HKClinicalAccount *account;
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID;
@property (nonatomic, readonly) _Bool wasRelogin;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 wasRelogin:(_Bool)arg2;

@end
