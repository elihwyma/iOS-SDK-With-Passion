/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIViewController, _HKMedicalIDData;

@interface HKEmergencyCardTableItem : NSObject

{
    _Bool _isInEditMode;
    _Bool _shouldShowHints;
    _HKMedicalIDData *_data;
    UIViewController *_owningViewController;
}

@property (retain, nonatomic) _HKMedicalIDData *data;
@property (weak, nonatomic) UIViewController *owningViewController;
@property (nonatomic, readonly) _Bool isInEditMode;
@property (nonatomic) _Bool shouldShowHints;

- (id)init;
- (id)title;
- (long long)numberOfRows;
- (struct UIEdgeInsets)separatorInset;
- (void)commitEditing;
- (void)localeDidChange:(id)arg1;
- (id)initInEditMode:(_Bool)arg1;
- (id)titleForHeader;
- (id)titleForFooter;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (void)timeZoneDidChange:(id)arg1;

@end
