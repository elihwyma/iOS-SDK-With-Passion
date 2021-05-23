/*
 Image: /System/Library/PrivateFrameworks/ShortcutUIKit.framework/ShortcutUIKit
 */

#import <Foundation/NSObject.h>

@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject

{
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}

- (id)_assetManager;
- (id)imageNamed:(id)arg1;
- (id)initWithBundleURL:(id)arg1;

@end
