/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject

{
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end
