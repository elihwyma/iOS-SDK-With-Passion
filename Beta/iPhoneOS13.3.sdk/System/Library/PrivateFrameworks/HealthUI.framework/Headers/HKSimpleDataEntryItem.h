/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject

{
    id <HKSimpleDataEntryItemDelegate> _delegate;
    id <HKSimpleDataEntryItemToolbarDelegate> _toolbarDelegate;
    unsigned long long _placeholderType;
}

@property (weak, nonatomic) id <HKSimpleDataEntryItemDelegate> delegate;
@property (weak, nonatomic) id <HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;
@property (nonatomic) unsigned long long placeholderType;

- (void)beginEditing;
- (id)cell;
- (void)localeDidChange:(id)arg1;
- (id)formattedKeyAndValue;
- (id)accessoryToolbar;
- (void)updateCellDisplay;
- (void)toolbarPrevButtonPressed:(id)arg1;
- (void)toolbarNextButtonPressed:(id)arg1;
- (void)toolbarDoneButtonPressed:(id)arg1;

@end
