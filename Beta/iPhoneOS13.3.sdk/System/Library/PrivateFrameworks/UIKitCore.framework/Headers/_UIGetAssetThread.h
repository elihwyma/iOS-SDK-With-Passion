/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSThread.h>

@class ALAsset, ALAssetsLibrary, NSCondition, NSURL;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread

{
    NSURL *_url;
    ALAssetsLibrary *_library;
    NSCondition *_condition;
    ALAsset *_asset;
}

@property (retain) NSCondition *condition;
@property (retain) ALAsset *asset;

- (void)main;
- (id)initWithURL:(id)arg1 assetsLibrary:(id)arg2;

@end
