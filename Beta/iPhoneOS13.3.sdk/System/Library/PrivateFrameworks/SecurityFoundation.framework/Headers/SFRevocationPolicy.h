/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@interface SFRevocationPolicy : NSObject <Swift>

{
    id _revocationPolicyInternal;
}

@property (nonatomic) unsigned long long revocationMethods;
@property (nonatomic) long long networkLookup;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2;

@end
