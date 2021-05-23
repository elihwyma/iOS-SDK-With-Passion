/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSEditingPane.h>

@class NSString, UITableView, UITableViewCell;

@interface TPSDetailPane : TPSEditingPane

{
    UITableView *_tableView;
    UITableViewCell *_tableViewCell;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) UITableViewCell *tableViewCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;

@end
