/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKPluginLoader : NSObject

+ (Class)loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtURL:(id)arg2 skipIfLoaded:(_Bool)arg3;
+ (id)loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtURL:(id)arg2 skipLoadedBundles:(_Bool)arg3 error:(id *)arg4;

@end
