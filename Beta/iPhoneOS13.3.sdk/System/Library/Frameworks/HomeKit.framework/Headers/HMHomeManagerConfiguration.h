/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFLocationAuthorization, NSOperationQueue, NSURL;

@interface HMHomeManagerConfiguration : NSObject

{
    unsigned long long _cachePolicy;
    _Bool _shouldConnect;
    unsigned long long _options;
    _Bool _discretionary;
    NSOperationQueue *_delegateQueue;
    HMFLocationAuthorization *_locationAuthorization;
    NSURL *_cacheURL;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) _Bool shouldConnect;
@property (readonly) _Bool canUseCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long options;
@property (readonly, getter=isDiscretionary) _Bool discretionary;
@property (readonly) NSOperationQueue *delegateQueue;

+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;

@end
