/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ILClassificationResponse : NSObject

{
    long long _action;
    NSString *_userString;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) long long action;
@property (copy, nonatomic) NSString *userString;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (id)initWithClassificationAction:(long long)arg1;

@end
