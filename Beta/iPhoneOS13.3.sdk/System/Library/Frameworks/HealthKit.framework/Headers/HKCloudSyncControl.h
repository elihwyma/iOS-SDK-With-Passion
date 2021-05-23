/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKCloudSyncControl : NSObject

{
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)serverInterface;
+ (id)clientInterface;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

@end
