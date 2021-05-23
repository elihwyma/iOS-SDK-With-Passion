/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class NSString;

@interface CXHandle : NSObject <Swift>

{
    long long _type;
    NSString *_value;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (_Bool)isEqualToHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end
