//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISearchFieldDelegate-Protocol.h>

@class SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate>
{
    SKUISearchFieldController *_searchFieldController;
    UIViewController *_parentViewController;
    SKUIClientContext *_clientContext;
}

+ (id)lastSearchTerm;
+ (void)setLastSearchTerm:(id)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
// - (void).cxx_destruct;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)arg1;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)reloadSearchField;
- (id)newSearchFieldBarItem;
- (void)setSearchFieldText:(id)arg1;
- (void)setSearchFieldPlaceholderText:(id)arg1;
@property(readonly, nonatomic) SKUISearchFieldController *searchFieldController;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;

@end

