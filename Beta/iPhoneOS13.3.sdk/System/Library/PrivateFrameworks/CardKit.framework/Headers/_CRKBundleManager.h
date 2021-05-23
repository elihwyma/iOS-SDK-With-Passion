/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject

{
    NSMutableSet *_bundles;
}

@property (nonatomic, readonly) NSSet *bundles;

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryPath;

- (id)init;
- (void)loadBundles;
- (void)registerBundle:(id)arg1;

@end
