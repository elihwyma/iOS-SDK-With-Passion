/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SLFacebookRegistrationInfo : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    NSNumber *_phone;
    NSString *_password;
    NSString *_gender;
    NSDate *_birthday;
}

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *phone;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSDate *birthday;

- (id)debugDescription;
- (_Bool)hasAllRequiredValues;

@end
