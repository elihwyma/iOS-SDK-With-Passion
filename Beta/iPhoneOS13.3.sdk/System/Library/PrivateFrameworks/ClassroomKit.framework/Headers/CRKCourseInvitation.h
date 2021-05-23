/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKCourseInvitation : NSObject

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    NSString *_instructorName;
    NSData *_instructorImageData;
    NSArray *_anchorCertificateDatas;
}

@property (copy, nonatomic, readonly) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic, readonly) NSString *courseName;
@property (copy, nonatomic, readonly) NSString *courseDescription;
@property (nonatomic, readonly) unsigned long long courseMascotType;
@property (nonatomic, readonly) unsigned long long courseColorType;
@property (copy, nonatomic, readonly) NSString *instructorName;
@property (copy, nonatomic, readonly) NSData *instructorImageData;
@property (copy, nonatomic, readonly) NSArray *anchorCertificateDatas;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificates:(id)arg8;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificateDatas:(id)arg8;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificates:(id)arg7;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificateDatas:(id)arg7;

@end
