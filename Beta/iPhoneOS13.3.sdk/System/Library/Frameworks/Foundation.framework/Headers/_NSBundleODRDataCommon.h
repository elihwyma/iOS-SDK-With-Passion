/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataCommon : NSObject

{
    NSMutableDictionary *_assetPackToURL;
    NSLock *_lock;
    NSBundle *_bundle;
    long long _sandboxToken;
}

- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (_Bool)assetPacksBecameAvailable:(id)arg1 error:(id *)arg2;
- (_Bool)assetPacksBecameUnavailable:(id)arg1 error:(id *)arg2;
- (id)URLForAssetPack:(id)arg1;

@end
