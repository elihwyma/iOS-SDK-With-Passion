/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsDataSource : NSObject

{
    UITableView *_tableView;
    NSString *_placeholder;
    NSString *_selectedReason;
    NSString *_privacyNote;
}

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *selectedReason;
@property (copy, nonatomic) NSString *privacyNote;
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
