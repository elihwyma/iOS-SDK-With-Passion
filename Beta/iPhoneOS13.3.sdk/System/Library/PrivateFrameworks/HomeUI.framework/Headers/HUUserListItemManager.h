/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager

{
    HFHomeBuilder *_homeBuilder;
}

@property (nonatomic, readonly) HFHomeBuilder *homeBuilder;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_homeFuture;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;

@end
