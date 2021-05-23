/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, SKUIClientContext, SKUIPinnedFooterView, UITableView;

@protocol SKUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdManager : NSObject

{
    id <SKUIRedeemIdManagerDelegate> _delegate;
    UITableView *_tableView;
    NSIndexPath *_activeIndexPath;
    SKUIClientContext *_clientContext;
    SKUIPinnedFooterView *_pinnedFooterView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSIndexPath *activeIndexPath;
@property (retain, nonatomic) SKUIPinnedFooterView *pinnedFooterView;
@property (weak, nonatomic) id <SKUIRedeemIdManagerDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setFooterHidden:(_Bool)arg1;
- (void)dismissActiveCell;
- (id)initWithClientContext:(id)arg1;
- (void)handleNextPressed;
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;
- (id)_disclosureAttributedString;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;
- (double)_heightForDisclosureFooter;
- (id)_placeholderTextForIndexPath:(id)arg1;
- (long long)_keyboardTypeForIndexPath:(id)arg1;
- (long long)_returnKeyTypeForIndexPath:(id)arg1;
- (id)_nextIndexPath:(id)arg1;
- (id)_pcLinkString;
- (id)_regulationsLinkString;
- (double)_tableViewNonFooterContentHeight;

@end
