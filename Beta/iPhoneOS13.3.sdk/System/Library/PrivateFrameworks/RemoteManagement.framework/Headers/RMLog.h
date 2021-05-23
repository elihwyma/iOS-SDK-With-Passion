/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@interface RMLog : NSObject

+ (id)extensionContext;
+ (id)assetResolver;
+ (id)configurationRepository;
+ (id)configurationSubscription;
+ (id)extensionConfigurationSubscriber;
+ (id)extensionRequestHandler;
+ (id)extensionStatusPublisher;
+ (id)unresolvedDataAsset;
+ (id)unresolvedFileAsset;

@end
