/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRXDeviceAuthenticationChallenge : NSObject

{
    CDUnknownBlockType _continuation;
    long long _challengeType;
    long long _challengeAttributes;
    NSString *_codeToEnterOnDevice;
}

@property (nonatomic, readonly) long long challengeType;
@property (nonatomic) long long challengeAttributes;
@property (copy, nonatomic, readonly) NSString *codeToEnterOnDevice;

+ (id)_challengeWithCodeToEnterLocally:(CDUnknownBlockType)arg1;
+ (id)_challengeWithCodeToEnterOnDevice:(id)arg1;

- (id)_init;
- (void)cancel;
- (void)userEnteredCodeLocally:(id)arg1;

@end
