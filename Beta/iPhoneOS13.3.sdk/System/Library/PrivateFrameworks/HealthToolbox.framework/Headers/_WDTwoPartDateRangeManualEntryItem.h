/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSDate, NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface _WDTwoPartDateRangeManualEntryItem

{
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_endItem;
    NSDate *_maximumEndDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tableViewCells;
- (id)generateValue;
- (id)initWithMaximumEndDate:(id)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)_setupEntryItems;
- (void)_startItemDidChange;
- (void)_endItemDidChange;

@end
