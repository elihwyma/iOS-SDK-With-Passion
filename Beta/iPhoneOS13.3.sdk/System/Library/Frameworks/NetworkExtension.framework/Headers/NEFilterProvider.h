/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEProvider.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider

{
    NEFilterProviderConfiguration *_filterConfiguration;
}

@property (retain) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptionForAction:(long long)arg1;

- (void)handleReport:(id)arg1;
- (void)startFilterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopFilterWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
