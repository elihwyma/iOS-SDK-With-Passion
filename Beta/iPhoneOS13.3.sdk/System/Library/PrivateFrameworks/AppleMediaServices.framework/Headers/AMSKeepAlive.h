/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    NSString *_name;
    long long _style;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long style;

+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)_accessAssertionCache:(CDUnknownBlockType)arg1;
+ (void)_handleAssertionExpiration;
+ (id)keepAliveWithFormat:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)arg1;
- (id)_cacheKey;
- (id)_assertionName;
- (id)initWithName:(id)arg1 style:(long long)arg2;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)_startLogTimer;
- (void)_removeProcessAssertion;
- (void)_removeOSTransaction;

@end
