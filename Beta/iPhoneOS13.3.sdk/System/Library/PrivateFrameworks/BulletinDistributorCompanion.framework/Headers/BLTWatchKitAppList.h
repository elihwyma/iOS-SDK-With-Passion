/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@protocol BLTWatchKitAppListDelegate;

@interface BLTWatchKitAppList : NSObject

{
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTWatchKitAppListDelegate> _delegate;
}

@property (getter=isLoaded) _Bool loaded;
@property (weak, nonatomic) id <BLTWatchKitAppListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_fetchWatchKitInfoWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;
- (void)fetchWatchKitInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchWatchKitInfo;

@end
