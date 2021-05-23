/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, NSString;

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem

{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSString *_text;
    long long _intention;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)cell;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4;
- (id)formattedKeyAndValue;
- (void)updateCellDisplay;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;

@end
