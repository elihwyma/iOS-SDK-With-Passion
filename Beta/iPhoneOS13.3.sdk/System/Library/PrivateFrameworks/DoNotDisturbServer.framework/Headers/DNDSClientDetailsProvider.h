/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject

{
    NSMutableDictionary *_detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;

- (id)init;
- (id)clientDetailsForIdentifier:(id)arg1;
- (void)_loadPreloadBundles;
- (id)clientDetailsForIdentifier:(id)arg1 applicationBundleURL:(id)arg2;
- (id)findClientDetailsForIdentifier:(id)arg1;

@end
