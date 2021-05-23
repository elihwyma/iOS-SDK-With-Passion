/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCProfile, MCProfileTitlePageOrganizationCell, MCProfileTitlePageSettingsIconCell, MCProfileTitlePageSubtitleCell, MCProfileTitlePageTitleCell, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageMetaDataSectionController : NSObject

{
    UITableView *_tableView;
    MCProfile *_profile;
    MCProfileTitlePageSettingsIconCell *_iconCell;
    MCProfileTitlePageTitleCell *_titleCell;
    MCProfileTitlePageSubtitleCell *_subtitleCell;
    MCProfileTitlePageOrganizationCell *_orgCell;
}

@property (retain, nonatomic) MCProfile *profile;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MCProfileTitlePageSettingsIconCell *iconCell;
@property (retain, nonatomic) MCProfileTitlePageTitleCell *titleCell;
@property (retain, nonatomic) MCProfileTitlePageSubtitleCell *subtitleCell;
@property (retain, nonatomic) MCProfileTitlePageOrganizationCell *orgCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (unsigned long long)numberOfRows;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (void)registerCellClassWithTableView:(id)arg1;
- (id)titleForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;

@end
