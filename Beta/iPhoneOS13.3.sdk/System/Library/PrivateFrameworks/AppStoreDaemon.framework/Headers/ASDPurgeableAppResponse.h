/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <Swift>

{
    long long _purgeableSize;
    NSArray *_purgeableApps;
}

@property (nonatomic, readonly) long long purgeableSize;
@property (nonatomic, readonly) NSArray *purgeableApps;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2;

@end
