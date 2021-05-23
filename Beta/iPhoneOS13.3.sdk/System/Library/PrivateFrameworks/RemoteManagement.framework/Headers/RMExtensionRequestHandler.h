/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

#import <RemoteManagement/Swift-Protocol.h>

@class NSString, RMExtensionConfigurationSubscriber;

@interface RMExtensionRequestHandler : NSObject <Swift>

{
    RMExtensionConfigurationSubscriber *_configurationSubscriber;
}

@property (nonatomic, readonly) RMExtensionConfigurationSubscriber *configurationSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConfigurationSubscriber:(id)arg1;

@end
