/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SPLostModeInfo : NSObject

{
    NSDate *_timestamp;
    NSString *_message;
    NSString *_phoneNumber;
}

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 phoneNumber:(id)arg2 timestamp:(id)arg3;

@end
