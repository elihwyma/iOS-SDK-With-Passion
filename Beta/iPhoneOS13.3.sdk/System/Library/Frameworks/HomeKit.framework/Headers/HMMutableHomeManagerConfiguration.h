/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMHomeManagerConfiguration.h>

@class HMFLocationAuthorization, NSOperationQueue;

@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration

{
    id <HMFLocking> _lock;
}

@property (retain) HMFLocationAuthorization *locationAuthorization;
@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) _Bool discretionary;
@property (retain) NSOperationQueue *delegateQueue;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (_Bool)shouldConnect;

@end
