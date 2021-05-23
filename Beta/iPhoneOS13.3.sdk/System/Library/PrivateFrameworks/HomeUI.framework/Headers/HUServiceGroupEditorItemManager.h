/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFServiceGroupBuilder, HFStaticItem;

@interface HUServiceGroupEditorItemManager : HFItemManager

{
    HFServiceGroupBuilder *_serviceGroupBuilder;
    unsigned long long _mode;
    HFStaticItem *_nameAndIconItem;
    HFItem *_instructionsItem;
    HFStaticItem *_serviceGridItem;
}

@property (retain, nonatomic) HFStaticItem *nameAndIconItem;
@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *serviceGridItem;
@property (nonatomic, readonly) HFServiceGroupBuilder *serviceGroupBuilder;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) long long instructionsSectionIndex;
@property (nonatomic, readonly) long long serviceGridSectionIndex;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)initWithServiceGroupBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)currentSectionIdentifiers;

@end
