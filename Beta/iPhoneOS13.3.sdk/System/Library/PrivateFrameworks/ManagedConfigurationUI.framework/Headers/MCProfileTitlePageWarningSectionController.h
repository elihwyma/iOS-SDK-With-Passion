/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCProfileWarning, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageWarningSectionController : NSObject

{
    UITableView *_tableView;
    MCProfileWarning *_warning;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MCProfileWarning *warning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)numberOfRows;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (id)initWithWarning:(id)arg1;
- (void)registerCellClassWithTableView:(id)arg1;
- (id)titleForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;

@end
