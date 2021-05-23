/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STShowMoreUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

{
    PSSpecifier *_summarySpecifier;
    NSArray *_usageItems;
    unsigned long long _numberOfItemsToShow;
    PSSpecifier *_showMoreSpecifier;
    unsigned long long _totalNumberOfItemsToShow;
}

@property (nonatomic, readonly) PSSpecifier *showMoreSpecifier;
@property (nonatomic) unsigned long long totalNumberOfItemsToShow;
@property (retain, nonatomic) PSSpecifier *summarySpecifier;
@property (copy, nonatomic) NSArray *usageItems;
@property (nonatomic) unsigned long long numberOfItemsToShow;

- (id)init;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (void)refreshUsageSpecifiersWithUpdates:(_Bool)arg1;
- (void)showMoreItems:(id)arg1;

@end
