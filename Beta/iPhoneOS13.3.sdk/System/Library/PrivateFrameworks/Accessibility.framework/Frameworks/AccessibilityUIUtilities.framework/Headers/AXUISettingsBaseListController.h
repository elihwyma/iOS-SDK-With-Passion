/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>

@class NSArray;

@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController

{
    _Bool _detailItemsHidden;
    NSArray *_detailItems;
}

@property (retain, nonatomic) NSArray *detailItems;
@property (nonatomic) _Bool detailItemsHidden;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellForSpecifier:(id)arg1;
- (id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg1 ifHidden:(_Bool)arg2;
- (id)specifierForKey:(id)arg1;
- (void)updateTableCheckedSelection:(id)arg1;
- (void)updateVisibleCellsWithCheckedSelection:(id)arg1;
- (id)cellForSpecifierID:(id)arg1;
- (id)specifierForIndexPath:(id)arg1;
- (void)showController:(id)arg1 withSpecifier:(id)arg2;

@end
