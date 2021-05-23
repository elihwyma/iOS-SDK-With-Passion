/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

#import <SafariFoundation/Swift-Protocol.h>

@class NSString;

@interface SFSuggestedUser : NSObject <Swift>

{
    NSString *_value;
    long long _type;
    long long _usageFrequency;
}

@property (nonatomic) long long usageFrequency;
@property (copy, nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)suggestedUserWithValue:(id)arg1 type:(long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;

@end
