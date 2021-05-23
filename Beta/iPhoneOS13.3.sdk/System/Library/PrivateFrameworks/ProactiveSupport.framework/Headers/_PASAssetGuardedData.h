/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class ASAsset, NSMutableDictionary, NSString;

@interface _PASAssetGuardedData : NSObject

{
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    ASAsset *_bestAvailableAsset;
    NSMutableDictionary *_overrides;
}

@end
