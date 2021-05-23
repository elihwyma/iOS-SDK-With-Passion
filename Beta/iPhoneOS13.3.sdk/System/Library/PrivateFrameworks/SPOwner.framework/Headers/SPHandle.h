/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPHandle : NSObject

{
    long long _type;
    NSString *_destination;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *destination;

+ (_Bool)supportsSecureCoding;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destination:(id)arg2;

@end
