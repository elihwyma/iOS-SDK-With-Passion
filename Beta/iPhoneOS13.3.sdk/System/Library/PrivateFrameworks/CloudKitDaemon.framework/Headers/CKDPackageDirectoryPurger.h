/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface CKDPackageDirectoryPurger : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_rootDirectories;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableArray *rootDirectories;

+ (id)sharedPurger;
+ (void)schedulePeriodicPurgesInDirectory:(id)arg1;

- (id)init;
- (void)purgeAll;
- (void)purgeRootDirectory:(id)arg1;
- (void)purgeDirectory:(id)arg1;
- (void)registerXPCActivity;
- (void)addRootDirectory:(id)arg1;

@end
