/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCNewsAppConfigurationManager;

@interface NUArticleResourceURLTranslator : NSObject

{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property (nonatomic, readonly) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)translateFileURLForURL:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (long long)endpointForScheme:(id)arg1;
- (id)defaultURLForEndpoint:(long long)arg1;

@end
