/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CRKIdentityPrivateKeySet : NSObject

{
    NSData *_activeIdentityPrivateKeyData;
    NSData *_stagedIdentityPrivateKeyData;
}

@property (copy, nonatomic, readonly) NSData *activeIdentityPrivateKeyData;
@property (copy, nonatomic, readonly) NSData *stagedIdentityPrivateKeyData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveIdentityPrivateKeyData:(id)arg1 stagedIdentityPrivateKeyData:(id)arg2;

@end
