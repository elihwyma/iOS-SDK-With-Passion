/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStaticItemProvider.h>

@class HFStaticItem, HMHome, NSArray, NSMutableDictionary;

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider

{
    HMHome *_home;
    NSArray *_accessControlItems;
    HFStaticItem *_passwordEnableItem;
    HFStaticItem *_passwordItem;
    NSMutableDictionary *_itemForIdentifier;
}

@property (copy, nonatomic) NSArray *accessControlItems;
@property (copy, nonatomic) HFStaticItem *passwordEnableItem;
@property (copy, nonatomic) HFStaticItem *passwordItem;
@property (nonatomic, readonly) NSMutableDictionary *itemForIdentifier;
@property (nonatomic, readonly) HMHome *home;

- (id)items;
- (id)initWithItems:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)_buildItems;

@end
