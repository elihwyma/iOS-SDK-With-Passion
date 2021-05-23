/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXRecipientSearchDataSource, PXRecipientSearchDataSourceManager, UITableView, UIView;

@protocol PXSearchRecipientControllerDelegate;

@interface PXSearchRecipientController : NSObject <Swift>

{
    struct {
        _Bool didSelectRecipient;
    } _delegateRespondsTo;
    id <PXSearchRecipientControllerDelegate> _delegate;
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;
    PXRecipientSearchDataSource *__searchDataSource;
    UITableView *__searchResultsTableView;
}

@property (retain, nonatomic, setter=_setSearchDataSource:) PXRecipientSearchDataSource *_searchDataSource;
@property (nonatomic, readonly) _Bool _searchHasNoResultsFound;
@property (nonatomic, readonly) UITableView *_searchResultsTableView;
@property (weak, nonatomic) id <PXSearchRecipientControllerDelegate> delegate;
@property (nonatomic, readonly) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_validationTextColorForSearchResult:(id)arg1;

@end
