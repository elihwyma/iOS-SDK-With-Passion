/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemManager.h>

@interface HFSimpleItemManager : HFItemManager

{
    CDUnknownBlockType _homeCreator;
    CDUnknownBlockType _itemModuleCreator;
    CDUnknownBlockType _itemProviderCreator;
    CDUnknownBlockType _itemComparator;
}

@property (copy, nonatomic) CDUnknownBlockType homeCreator;
@property (copy, nonatomic) CDUnknownBlockType itemModuleCreator;
@property (copy, nonatomic) CDUnknownBlockType itemProviderCreator;
@property (copy, nonatomic) CDUnknownBlockType itemComparator;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 itemProvidersCreator:(CDUnknownBlockType)arg2;
- (id)_buildItemModulesForHome:(id)arg1;

@end
