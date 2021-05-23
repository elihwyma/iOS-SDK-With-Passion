/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUICardSectionTableCell.h>

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell

{
    _Bool _sectionHasHeader;
    int _actualSectionLocation;
}

@property int actualSectionLocation;
@property (nonatomic) _Bool sectionHasHeader;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (int)sectionLocation;
- (_Bool)_isUsingOldStyleMultiselection;
- (_Bool)_insetsBackground;
- (_Bool)_showSeparatorAtTopOfSection;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(_Bool)arg1;
- (_Bool)isDark;
- (void)tlk_updateForAppearance:(id)arg1;
- (_Bool)shouldDrawBackgroundColor;
- (_Bool)shouldDrawFullLengthSeparatorForSectionLocation:(int)arg1;

@end
