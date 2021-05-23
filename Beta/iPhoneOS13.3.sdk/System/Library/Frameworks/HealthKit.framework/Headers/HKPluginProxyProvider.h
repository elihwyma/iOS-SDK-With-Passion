/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKProxyProvider.h>

@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic, readonly) NSString *pluginIdentifier;

- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3;
- (void)fetchPluginProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
