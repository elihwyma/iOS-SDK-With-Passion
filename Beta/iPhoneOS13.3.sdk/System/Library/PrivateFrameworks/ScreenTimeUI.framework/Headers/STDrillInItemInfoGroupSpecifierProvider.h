/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class PSSpecifier, STUsageItem;

__attribute__((visibility("hidden")))
@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider

{
    STUsageItem *_usageItem;
    PSSpecifier *_appIconSpecifier;
    PSSpecifier *_ageRatingSpecifier;
    PSSpecifier *_developerSpecifier;
}

@property (nonatomic, readonly) STUsageItem *usageItem;
@property (nonatomic, readonly) PSSpecifier *appIconSpecifier;
@property (nonatomic, readonly) PSSpecifier *ageRatingSpecifier;
@property (nonatomic, readonly) PSSpecifier *developerSpecifier;

- (void)_didFetchAppInfo:(id)arg1;
- (id)initWithUsageItem:(id)arg1;
- (id)usageItem:(id)arg1;
- (id)category:(id)arg1;
- (id)ageRating:(id)arg1;
- (id)developer:(id)arg1;

@end
