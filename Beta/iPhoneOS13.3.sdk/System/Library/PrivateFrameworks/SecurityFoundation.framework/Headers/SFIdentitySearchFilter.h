/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray;

@interface SFIdentitySearchFilter : NSObject <Swift>

{
    id _identitySearchFilterInternal;
}

@property (copy, nonatomic) NSArray *certificateSerialNumbers;
@property (copy, nonatomic) NSArray *certificateTypes;
@property (copy, nonatomic) NSArray *keySpecifiers;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
