/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class NSDateFormatter, NSDictionary, NSString, UILocalizedIndexedCollation, UITableView;

@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileListView : UIView

{
    id <WFRemoteFileListViewDelegate> _delegate;
    UITableView *_tableView;
    NSDateFormatter *_dateFormatter;
    UILocalizedIndexedCollation *_collation;
    NSDictionary *_filesBySection;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) UILocalizedIndexedCollation *collation;
@property (copy, nonatomic) NSDictionary *filesBySection;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) struct UIEdgeInsets verticalScrollIndicatorInsets;
@property (weak, nonatomic) id <WFRemoteFileListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setFiles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collation:(id)arg2;
- (void)updateCheckmarkForFile:(id)arg1;
- (struct CGRect)frameOfCellAtPoint:(struct CGPoint)arg1;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (id)fileAtPoint:(struct CGPoint)arg1;

@end
