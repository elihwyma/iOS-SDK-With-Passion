/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@protocol SKUITableViewSectionDelegate;

@interface SKUITableViewSection : NSObject

{
    id <SKUITableViewSectionDelegate> _delegate;
    _Bool _hidesHeaderView;
    long long _sectionIndex;
}

@property (weak, nonatomic) id <SKUITableViewSectionDelegate> delegate;
@property (nonatomic) _Bool hidesHeaderView;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, readonly) long long numberOfRowsInSection;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)headerViewForTableView:(id)arg1;
- (id)footerViewForTableView:(id)arg1;

@end
