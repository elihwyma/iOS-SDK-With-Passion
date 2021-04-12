//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _HKMedicalIDData;

@interface HKEmergencyCardTableItem : NSObject
{
    BOOL _isInEditMode;
    BOOL _shouldShowHints;
    _HKMedicalIDData *_data;
    UIViewController *_owningViewController;
}

@property(nonatomic) BOOL shouldShowHints; // @synthesize shouldShowHints=_shouldShowHints;
@property(readonly, nonatomic) BOOL isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(retain, nonatomic) _HKMedicalIDData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)timeZoneDidChange:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (void)commitEditing;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (id)titleForFooter;
- (id)titleForHeader;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (long long)numberOfRows;
- (UIEdgeInsets)separatorInset;
- (id)title;
- (BOOL)hasPresentableData;
- (id)init;
- (id)initInEditMode:(BOOL)arg1;

@end

