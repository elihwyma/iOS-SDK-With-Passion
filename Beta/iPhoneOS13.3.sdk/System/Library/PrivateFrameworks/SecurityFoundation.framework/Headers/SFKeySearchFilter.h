/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray;

@interface SFKeySearchFilter : NSObject <Swift>

{
    id _keySearchFilterInternal;
}

@property (copy, nonatomic) NSArray *specifiers;
@property (copy, nonatomic) NSArray *domains;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
