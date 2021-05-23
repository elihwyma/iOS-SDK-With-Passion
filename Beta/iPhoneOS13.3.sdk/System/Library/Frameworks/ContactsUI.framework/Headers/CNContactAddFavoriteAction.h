/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNFavorites, CNUIFavoritesEntryPicker, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction : CNPropertyAction

{
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;
    CNFavorites *_favorites;
}

@property (retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (nonatomic, readonly) CNFavorites *favorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)canPerformAction;
- (void)performActionWithSender:(id)arg1;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3;
- (void)_saveFavorite:(id)arg1;

@end
