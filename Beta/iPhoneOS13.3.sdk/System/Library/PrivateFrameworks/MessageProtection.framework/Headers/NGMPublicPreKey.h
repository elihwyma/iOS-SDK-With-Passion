/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class DHPublicKey, NSData;

__attribute__((visibility("hidden")))
@interface NGMPublicPreKey : NSObject

{
    DHPublicKey *_dhKey;
    NSData *_signature;
    double _timestamp;
}

@property (nonatomic, readonly) DHPublicKey *dhKey;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) double timestamp;

- (id)description;
- (id)initWithPublicKey:(id)arg1 signature:(id)arg2 timestamp:(double)arg3;
- (id)initRemotePrekeyWithPublicPrekey:(id)arg1 signedBy:(id)arg2 error:(id *)arg3;
- (_Bool)isValidlySignedBy:(id)arg1 error:(id *)arg2;

@end
