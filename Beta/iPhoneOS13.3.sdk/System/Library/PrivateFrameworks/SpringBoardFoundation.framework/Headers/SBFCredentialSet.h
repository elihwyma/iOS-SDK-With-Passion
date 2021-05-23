/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SBFCredentialSet : NSObject

{
    struct __ACMHandle *_acmContext;
    _Bool _ownsContext;
    NSData *_cachedCredentials;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedCredentialSet:(id)arg1;
- (id)serializedCredentialSet;

@end
