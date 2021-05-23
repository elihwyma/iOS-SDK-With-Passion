/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject

{
    LSBundleProxy *_bundleProxy;
}

@property (retain, nonatomic) LSBundleProxy *bundleProxy;

+ (id)activityBundleHelperForExtension:(id)arg1;

- (id)init;
- (id)debugDescription;
- (id)initWithBundleProxy:(id)arg1;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;

@end
