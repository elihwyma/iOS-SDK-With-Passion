/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonDataSource : NSObject

{
    UITableView *_tableView;
    NSArray *_reasons;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *reasons;
@property (copy, nonatomic) NSString *selectReasonTitle;
@property (copy, nonatomic) NSString *selectReasonSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1;

@end
