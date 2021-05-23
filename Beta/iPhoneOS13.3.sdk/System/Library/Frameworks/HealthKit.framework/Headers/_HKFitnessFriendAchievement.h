/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _HKFitnessFriendAchievement : HKSample <Swift>

{
    NSUUID *_friendUUID;
    NSString *_templateUniqueName;
    NSDate *_completedDate;
    NSNumber *_value;
}

@property (retain, nonatomic) NSUUID *friendUUID;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) NSDate *completedDate;
@property (retain, nonatomic) NSNumber *value;

+ (_Bool)supportsSecureCoding;
+ (id)achievementWithTemplateUniqueName:(id)arg1 completedDate:(id)arg2 value:(id)arg3 friendUUID:(id)arg4;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
