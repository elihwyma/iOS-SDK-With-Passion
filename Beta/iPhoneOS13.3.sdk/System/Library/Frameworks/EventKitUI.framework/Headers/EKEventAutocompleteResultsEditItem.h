/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray;

@protocol EKEventAutocompleteResultsEditItemDelegate;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem

{
    _Bool _suggestionApplied;
    NSArray *_results;
}

@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id <EKEventAutocompleteResultsEditItemDelegate> delegate;
@property (nonatomic, readonly) _Bool hasSuggestedLocationResult;

+ (id)_backgroundColor;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;

@end
