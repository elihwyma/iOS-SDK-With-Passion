/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPhoneBookEntry : NSObject

{
    _Bool _isHidden;
    NSString *_name;
    NSString *_number;
    NSString *_altNumber;
    NSString *_altText;
    NSString *_email;
    NSString *_group;
}

@property (nonatomic) _Bool isHidden;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *altNumber;
@property (retain, nonatomic) NSString *altText;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *group;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
