/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFKeySpecifier;

@interface SFMessageAuthenticationCodeOperation : NSObject

{
    id _messageAuthenticationCodeOperationInternal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) _SFKeySpecifier *signingKeySpecifier;

+ (_Bool)supportsSecureCoding;
+ (id)_defaultMacOperation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;

@end
