/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface PKAuthenticatorEvaluationResponse : NSObject

{
    _Bool _biometricMatch;
    long long _result;
    NSString *_kextBlacklistVersion;
    NSData *_credential;
}

@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) _Bool biometricMatch;
@property (nonatomic, readonly) NSData *credential;

+ (id)responseWithResult:(long long)arg1;
+ (id)responseWithResult:(long long)arg1 biometricMatch:(_Bool)arg2 credential:(id)arg3;

@end
