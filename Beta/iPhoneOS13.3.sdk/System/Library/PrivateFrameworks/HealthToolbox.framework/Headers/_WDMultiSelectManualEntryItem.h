/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSArray;

__attribute__((visibility("hidden")))
@interface _WDMultiSelectManualEntryItem

{
    NSArray *_tableViewCells;
    NSArray *_titles;
    long long _selectedIndex;
}

@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) long long selectedIndex;

- (id)tableViewCells;
- (id)generateValue;
- (void)cellForItemTapped:(id)arg1;

@end
