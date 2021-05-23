/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface HKAuthorizationPresentationRequest : NSObject

{
    _Bool _dismissWhenBackgrounded;
    long long _type;
    NSString *_readUsageDescription;
    NSString *_shareUsageDescription;
    NSString *_researchStudyUsageDescription;
    NSSet *_typesRequiringReadAuthorization;
    NSSet *_typesRequiringShareAuthorization;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *readUsageDescription;
@property (copy, nonatomic) NSString *shareUsageDescription;
@property (copy, nonatomic) NSString *researchStudyUsageDescription;
@property (copy, nonatomic) NSSet *typesRequiringReadAuthorization;
@property (copy, nonatomic) NSSet *typesRequiringShareAuthorization;
@property (nonatomic, getter=shouldDismissWhenBackgrounded) _Bool dismissWhenBackgrounded;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
