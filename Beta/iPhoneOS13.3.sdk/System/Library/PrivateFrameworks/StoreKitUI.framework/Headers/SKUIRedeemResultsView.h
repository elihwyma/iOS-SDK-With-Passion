/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableView.h>

@class NSArray, NSString;

@protocol SKUIRedeemResultsViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultsView : UITableView

{
    NSArray *_sections;
    struct UIEdgeInsets _contentInsetAdjustments;
    id <SKUIRedeemResultsViewDelegate> _resultsDelegate;
}

@property (retain, nonatomic) NSArray *sections;
@property (weak, nonatomic) id <SKUIRedeemResultsViewDelegate> resultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
