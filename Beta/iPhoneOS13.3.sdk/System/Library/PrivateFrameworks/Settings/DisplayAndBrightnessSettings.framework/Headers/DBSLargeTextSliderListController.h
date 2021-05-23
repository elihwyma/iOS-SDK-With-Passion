/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface DBSLargeTextSliderListController : PSListController

{
    PSSpecifier *_sliderGroupSpecifier;
    _Bool _viewIsDisappearing;
    _Bool _showsExtendedRangeSwitch;
    _Bool _usesExtendedRange;
    _Bool _showsLargerSizesHelpText;
    NSArray *_contentSizeCategories;
    long long _selectedCategoryIndex;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) _Bool showsExtendedRangeSwitch;
@property (nonatomic) _Bool usesExtendedRange;
@property (nonatomic) _Bool showsLargerSizesHelpText;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)specifiers;
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;
- (id)initUsingExtendedRange:(_Bool)arg1;

@end
