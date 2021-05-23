/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTSectionInfoObserver, LSApplicationWorkspace, NSString;

@protocol BLTSectionInfoListProviderDelegate, OS_dispatch_queue;

@interface BLTSectionInfoListBBProvider : NSObject

{
    BLTSectionInfoObserver *_observer;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_queue;
    id <BLTSectionInfoListProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <BLTSectionInfoListProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationIconDidChange:(id)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSettingsGateway:(id)arg1;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)sectionInfoObserver:(id)arg1 updatedSectionInfoForSectionIDs:(id)arg2;
- (void)sectionInfoObserver:(id)arg1 removedSectionWithSectionID:(id)arg2;

@end
