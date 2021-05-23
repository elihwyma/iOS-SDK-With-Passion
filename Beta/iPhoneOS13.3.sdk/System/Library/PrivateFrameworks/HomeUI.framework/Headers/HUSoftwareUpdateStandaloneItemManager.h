/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HMHome, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule, NAFuture, NSString;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager

{
    HFItem *_autoUpdateItem;
    HUSoftwareUpdateFetchItem *_fetchItem;
    HUSoftwareUpdateItemModule *_softwareUpdateModule;
    NAFuture *_softwareUpdateFetchFuture;
    HMHome *_overrideHome;
}

@property (retain, nonatomic) HFItem *autoUpdateItem;
@property (retain, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HUSoftwareUpdateFetchItem *fetchItem;
@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)triggerSoftwareUpdateFetch;

@end
