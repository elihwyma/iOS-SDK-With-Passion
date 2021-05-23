/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BLTWatchKitAppDefinition : NSObject

{
    _Bool _isInstalled;
    _Bool _runsIndependently;
    NSString *_containerBundleID;
    NSString *_watchKitAppBundleID;
}

@property (nonatomic, readonly) NSString *containerBundleID;
@property (nonatomic, readonly) NSString *watchKitAppBundleID;
@property (nonatomic, readonly) _Bool isInstalled;
@property (nonatomic, readonly) _Bool runsIndependently;

- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(_Bool)arg3 runsIndependently:(_Bool)arg4;

@end
