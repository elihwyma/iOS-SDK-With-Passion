/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray, NSString;

@interface _SFAccessPolicy : NSObject <Swift>

{
    CDStruct_9d0d652d _accessibility;
    long long _sharingPolicy;
    NSString *_accessGroup;
    NSArray *_accessControlList;
}

@property (nonatomic, readonly) const struct __CFDictionary *secAccessibilityAttributes;
@property (copy, nonatomic) NSArray *accessControlList;
@property (nonatomic) CDStruct_9d0d652d accessibility;
@property (nonatomic) long long sharingPolicy;
@property (copy, nonatomic) NSString *accessGroup;

+ (_Bool)supportsSecureCoding;
+ (id)accessPolicyWithSecAccessibility:(struct __CFString *)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessibility:(CDStruct_9d0d652d)arg1 sharingPolicy:(long long)arg2;

@end
