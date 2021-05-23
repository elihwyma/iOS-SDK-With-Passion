/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class MAAsset, NSMutableDictionary, NSString;

@interface _PASAsset2GuardedData : NSObject

{
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    MAAsset *_bestAvailableAsset;
    _Bool _purgeObsoleteInstalledAssets;
    NSMutableDictionary *_overrides;
}

@end
