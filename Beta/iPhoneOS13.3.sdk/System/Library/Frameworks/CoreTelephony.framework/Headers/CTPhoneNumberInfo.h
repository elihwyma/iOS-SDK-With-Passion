/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject

{
    _Bool _isPresent;
    _Bool _isEditable;
    _Bool _isRead;
    NSString *_label;
    NSString *_number;
    NSString *_displayPhoneNumber;
}

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *displayPhoneNumber;
@property (nonatomic) _Bool isPresent;
@property (nonatomic) _Bool isEditable;
@property (nonatomic) _Bool isRead;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
