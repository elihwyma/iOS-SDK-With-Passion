/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFStaticItem, HMHome, HUSoftwareUpdateActionAndProgressItem, HUSoftwareUpdateInfoItemProvider, NSSet;

@protocol HFSoftwareUpdatableItemProtocol;

@interface HUSoftwareUpdateItemModule : HFItemModule

{
    _Bool _unifyDownloadAndDescriptionSections;
    NSSet *_itemProviders;
    HMHome *_home;
    HFItem<HFSoftwareUpdatableItemProtocol> *_sourceItem;
    NSSet *_accessories;
    HUSoftwareUpdateActionAndProgressItem *_actionAndProgressItem;
    HFStaticItem *_learnMoreItem;
    HUSoftwareUpdateInfoItemProvider *_softwareUpdateInfoItemProvider;
}

@property (retain, nonatomic) HUSoftwareUpdateActionAndProgressItem *actionAndProgressItem;
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (retain, nonatomic) HFStaticItem *learnMoreItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;
@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic) _Bool unifyDownloadAndDescriptionSections;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;

@end
