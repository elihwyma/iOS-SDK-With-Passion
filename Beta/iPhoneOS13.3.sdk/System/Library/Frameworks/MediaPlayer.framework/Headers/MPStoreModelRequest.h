/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelRequest.h>

@class NSString;

@interface MPStoreModelRequest : MPModelRequest

{
    _Bool _didSetTimeoutInterval;
    double _timeoutInterval;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    NSString *_clientPlatformIdentifier;
    unsigned long long _authenticationOptions;
}

@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *clientPlatformIdentifier;
@property (nonatomic) unsigned long long authenticationOptions;

+ (_Bool)supportsSecureCoding;
+ (_Bool)requiresNetwork;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
