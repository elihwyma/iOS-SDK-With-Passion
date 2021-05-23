/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <Swift>

{
    long long _purgedSize;
    NSArray *_purgedApps;
}

@property (nonatomic, readonly) long long purgedSize;
@property (nonatomic, readonly) NSArray *purgedApps;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2;

@end
