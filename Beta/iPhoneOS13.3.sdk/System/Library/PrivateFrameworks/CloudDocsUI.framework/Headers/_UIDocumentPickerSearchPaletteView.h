/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UISearchController, _UIDocumentSearchListController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchPaletteView : UIView

{
    UISearchController *_searchController;
    _UIDocumentSearchListController *_resultsController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *searchFieldRightConstraint;
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController;
@property (retain, nonatomic) UISearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 resultsController:(id)arg2;
- (void)searchCanceled:(id)arg1;

@end
