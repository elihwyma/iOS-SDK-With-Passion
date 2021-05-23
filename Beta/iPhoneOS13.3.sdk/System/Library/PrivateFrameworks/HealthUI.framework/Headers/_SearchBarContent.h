/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIStackView.h>

@class HKBarButtonItemControl, HKIncrementalSearchBar, NSString, _SearchEntryWithMatchDisplay;

@protocol HKIncrementalSearchBarDelegate;

@interface _SearchBarContent : UIStackView

{
    id <HKIncrementalSearchBarDelegate> _searchBarDelegate;
    HKIncrementalSearchBar *_searchBar;
    HKBarButtonItemControl *_upBarButton;
    HKBarButtonItemControl *_downBarButton;
    HKBarButtonItemControl *_doneBarButton;
    _SearchEntryWithMatchDisplay *_searchEntry;
}

@property (weak, nonatomic) id <HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (weak, nonatomic, readonly) HKIncrementalSearchBar *searchBar;
@property (nonatomic, readonly) HKBarButtonItemControl *upBarButton;
@property (nonatomic, readonly) HKBarButtonItemControl *downBarButton;
@property (nonatomic, readonly) HKBarButtonItemControl *doneBarButton;
@property (nonatomic, readonly) _SearchEntryWithMatchDisplay *searchEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)inputField;
- (id)initWithSearchBar:(id)arg1;
- (void)buildSearchBarContent;
- (void)upAction:(id)arg1;
- (void)downAction:(id)arg1;

@end
