/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@class UIColor, UIFont;

@protocol CNContactListStyle

@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) UIColor *cellBackgroundSelectedColor;
@property (nonatomic, readonly) UIColor *cellNameTextColor;
@property (nonatomic, readonly) UIColor *cellNameTextHighlightedColor;
@property (nonatomic, readonly) UIColor *cellSearchResultTextColor;
@property (nonatomic, readonly) UIColor *cellSearchResultTextDisabledColor;
@property (nonatomic, readonly) UIFont *cellNameTextFont;
@property (nonatomic, readonly) UIFont *cellNameTextEmphasisedFont;
@property (nonatomic, readonly) struct UIEdgeInsets cellSeparatorInset;
@property (nonatomic, readonly) _Bool cellIsOpaque;
@property (nonatomic, readonly) _Bool cellIsVibrant;
@property (nonatomic, readonly) UIColor *headerBackgroundColor;
@property (nonatomic, readonly) UIColor *headerIndexTextColor;
@property (nonatomic, readonly) UIColor *bannerTitleTextColor;
@property (nonatomic, readonly) UIColor *tableBackgroundColor;
@property (nonatomic, readonly) UIColor *tableBackgroundFilteredColor;
@property (nonatomic, readonly) UIColor *tableSectionIndexBackgroundColor;
@property (nonatomic, readonly) UIColor *tableSeparatorColor;
@property (nonatomic, readonly) unsigned long long tableNoContactsAvailableStyle;
@property (nonatomic, readonly) long long tableSeparatorStyle;
@property (nonatomic, readonly) long long tableSeparatorOverlayBlendMode;
@property (nonatomic, readonly) _Bool tableIsOpaque;
@property (nonatomic, readonly) UIColor *searchBarBackgroundColor;
@property (nonatomic, readonly) UIColor *searchBarTextColor;
@property (nonatomic, readonly) UIColor *searchBarTextDisabledColor;
@property (nonatomic, readonly) UIColor *searchBarPlaceholderTextColor;
@property (nonatomic, readonly) UIColor *searchBarPlaceholderTextDisabledColor;
@property (nonatomic, readonly) long long searchBarStyle;
@property (nonatomic, readonly) long long searchBarKeyboardAppearance;
@property (nonatomic, readonly) _Bool searchBarIsTranslucent;
@property (nonatomic, readonly) long long navigationBarStyle;
@property (nonatomic, readonly) _Bool navigationBarIsTranslucent;

@end
