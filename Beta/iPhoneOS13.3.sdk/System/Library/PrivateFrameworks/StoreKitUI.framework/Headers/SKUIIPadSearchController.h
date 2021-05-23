/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject

{
    SKUISearchFieldController *_searchFieldController;
    UIViewController *_parentViewController;
    SKUIClientContext *_clientContext;
}

@property (weak, nonatomic, readonly) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUISearchFieldController *searchFieldController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)lastSearchTerm;
+ (void)setLastSearchTerm:(id)arg1;

- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;
- (void)reloadSearchField;
- (id)newSearchFieldBarItem;
- (void)_termDidChangeNotification:(id)arg1;
- (id)_searchFieldController;
- (void)setSearchFieldText:(id)arg1;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)setSearchFieldPlaceholderText:(id)arg1;

@end
