/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class DMFControlSessionIdentifier, NSData, NSString;

@interface CRKInstructor : NSObject

{
    DMFControlSessionIdentifier *_sessionIdentifier;
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_courseName;
    NSData *_imageData;
}

@property (copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *courseName;
@property (retain, nonatomic) NSData *imageData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToInstructor:(id)arg1;

@end
