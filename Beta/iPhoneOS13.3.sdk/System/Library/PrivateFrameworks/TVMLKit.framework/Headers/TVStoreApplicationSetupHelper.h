/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKURLBagCache, NSURL;

@interface TVStoreApplicationSetupHelper : NSObject

{
    NSURL *_defaultBootURL;
    IKURLBagCache *_bagCache;
}

@property (copy, nonatomic) NSURL *defaultBootURL;
@property (nonatomic, readonly) IKURLBagCache *bagCache;

+ (id)bootURLWithBagBootURL:(id)arg1 defaultBootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bagBootURLKey:(id)arg2 useCache:(_Bool)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 bagBootURLKey:(id)arg3 useCache:(_Bool)arg4;
+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 useCache:(_Bool)arg3;
+ (id)preferredBootURL;
+ (id)fallbackBootURL;
+ (id)defaultBagBootLaunchContextWithOptions:(id)arg1 useCache:(_Bool)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;

- (id)init;
- (id)initWithDefaultBootURL:(id)arg1;
- (id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2;
- (void)obtainBootURLWithCompletion:(CDUnknownBlockType)arg1;

@end
