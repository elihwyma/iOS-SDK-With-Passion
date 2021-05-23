/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CRBundleManager : NSObject

{
    NSMutableSet *_bundles;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)bundleDirectoryPath;

- (id)init;
- (void)getBundlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getBundlesOnCurrentQueueWithCompletion:(CDUnknownBlockType)arg1;

@end
