/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TVRCDeviceAuthenticationChallenge : NSObject

{
    long long _challengeType;
    long long _challengeAttributes;
    NSString *_codeToEnterOnDevice;
    NSString *_deviceIdentifier;
}

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic, readonly) long long challengeType;
@property (nonatomic) long long challengeAttributes;
@property (copy, nonatomic, readonly) NSString *codeToEnterOnDevice;

- (void)cancel;
- (void)userEnteredCodeLocally:(id)arg1;
- (id)_initWithDeviceIdentifier:(id)arg1 challengeType:(long long)arg2 codeToEnterOnDevice:(id)arg3;

@end
