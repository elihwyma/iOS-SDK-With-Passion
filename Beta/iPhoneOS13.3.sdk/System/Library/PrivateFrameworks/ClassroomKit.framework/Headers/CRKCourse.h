/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class CRKUser, DMFControlGroupIdentifier, NSDate, NSDictionary, NSSet, NSString;

@interface CRKCourse : NSObject <Swift>

{
    _Bool _requestingUnenroll;
    _Bool _studentCredentialsAreValid;
    _Bool _mustRequestUnenroll;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    CRKUser *_courseUser;
    NSDictionary *_instructorsByIdentifier;
    unsigned long long _type;
    NSDate *_automaticRemovalDate;
    NSSet *_trustedCertificatePersistentIds;
    NSSet *_validTrustedCertificatePersistentIds;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *courseName;
@property (copy, nonatomic) NSString *courseDescription;
@property (nonatomic) unsigned long long courseMascotType;
@property (nonatomic) unsigned long long courseColorType;
@property (retain, nonatomic) CRKUser *courseUser;
@property (copy, nonatomic) NSDictionary *instructorsByIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) _Bool mustRequestUnenroll;
@property (nonatomic, getter=isRequestingUnenroll) _Bool requestingUnenroll;
@property (retain, nonatomic) NSDate *automaticRemovalDate;
@property (nonatomic) _Bool studentCredentialsAreValid;
@property (retain, nonatomic) NSSet *trustedCertificatePersistentIds;
@property (retain, nonatomic) NSSet *validTrustedCertificatePersistentIds;
@property (nonatomic, readonly, getter=isManaged) _Bool managed;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingExpired;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setManaged:(_Bool)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)isEqualToCourse:(id)arg1;
- (id)initWithIdentifier:(id)arg1 managed:(_Bool)arg2;
- (_Bool)isDeeplyEqual:(id)arg1;

@end
