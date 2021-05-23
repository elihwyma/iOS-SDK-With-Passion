/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL;

@protocol BLTSiriActionAppListDelegate, OS_dispatch_queue;

@interface BLTSiriActionAppList : NSObject

{
    NSMutableDictionary *_installed;
    NSMutableSet *_removed;
    NSObject<OS_dispatch_queue> *_appListQueue;
    NSURL *_siriActionAppListStoreURL;
    NSMutableSet *_appListStore;
    id <BLTSiriActionAppListDelegate> _delegate;
}

@property (nonatomic, readonly) NSDictionary *installed;
@property (nonatomic, readonly) NSSet *removed;
@property (weak, nonatomic) id <BLTSiriActionAppListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationIconDidChange:(id)arg1;
- (id)_siriActionAppListStoreURL;
- (_Bool)_handleAppListInstalled:(struct NSDictionary *)arg1 removed:(id)arg2;
- (void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2;

@end
