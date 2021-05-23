/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactListStyleDefautProvider.h>

@class CNContactStyle;

__attribute__((visibility("hidden")))
@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

{
    CNContactStyle *_contactStyle;
}

@property (nonatomic, readonly) CNContactStyle *contactStyle;

- (long long)searchBarStyle;
- (id)tableBackgroundColor;
- (id)tableSeparatorColor;
- (id)cellBackgroundColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (id)searchBarBackgroundColor;
- (id)headerBackgroundColor;
- (id)cellBackgroundSelectedColor;
- (id)cellNameTextColor;
- (id)cellNameTextHighlightedColor;
- (id)cellSearchResultTextColor;
- (id)cellSearchResultTextDisabledColor;
- (id)cellNameTextFont;
- (id)cellNameTextEmphasisedFont;
- (struct UIEdgeInsets)cellSeparatorInset;
- (_Bool)cellIsOpaque;
- (_Bool)cellIsVibrant;
- (id)headerIndexTextColor;
- (id)bannerTitleTextColor;
- (id)tableBackgroundFilteredColor;
- (id)tableSectionIndexBackgroundColor;
- (long long)tableSeparatorStyle;
- (long long)tableSeparatorOverlayBlendMode;
- (_Bool)tableIsOpaque;
- (id)searchBarTextColor;
- (id)searchBarTextDisabledColor;
- (id)searchBarPlaceholderTextColor;
- (id)searchBarPlaceholderTextDisabledColor;
- (long long)searchBarKeyboardAppearance;
- (_Bool)searchBarIsTranslucent;
- (long long)navigationBarStyle;
- (_Bool)navigationBarIsTranslucent;
- (id)initWithContactStyle:(id)arg1;

@end
