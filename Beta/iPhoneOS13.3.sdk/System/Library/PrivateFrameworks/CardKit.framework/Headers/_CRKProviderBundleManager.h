/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Cards/CRBundleManager.h>

@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager

{
    NSMutableSet *_providerBundles;
}

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryName;

- (void)getProviderBundlesWithCompletion:(CDUnknownBlockType)arg1;

@end
