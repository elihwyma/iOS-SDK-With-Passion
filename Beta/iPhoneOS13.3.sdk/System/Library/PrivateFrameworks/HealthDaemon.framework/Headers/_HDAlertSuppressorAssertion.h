/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class NSObject, NSString;

@protocol OS_dispatch_source;

@interface _HDAlertSuppressorAssertion : HDAssertion

{
    NSString *_processBundleIdentifier;
    NSObject<OS_dispatch_source> *_keepaliveTimer;
}

@property (copy, nonatomic, readonly) NSString *processBundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *keepaliveTimer;

- (id)initWithOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2;

@end
