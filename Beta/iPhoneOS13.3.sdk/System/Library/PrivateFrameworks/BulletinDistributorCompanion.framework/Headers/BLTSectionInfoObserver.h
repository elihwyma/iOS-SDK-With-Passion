/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBObserver, BBSettingsGateway, NSString;

@protocol BLTSectionInfoObserverDelegate, OS_dispatch_queue;

@interface BLTSectionInfoObserver : NSObject

{
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _reloadSectionInfoCompletion;
    BBSettingsGateway *_settingsGateway;
    id <BLTSectionInfoObserverDelegate> _delegate;
}

@property (weak, nonatomic) id <BLTSectionInfoObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (id)initWithSettingsGateway:(id)arg1;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoBySectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_settingsGatewayReconnected:(id)arg1;
- (void)_reloadSectionInfosWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getUniversalSectionIDs:(id)arg1 sectionIDEnumerator:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
