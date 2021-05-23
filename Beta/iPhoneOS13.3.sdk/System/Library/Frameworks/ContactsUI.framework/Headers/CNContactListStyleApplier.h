/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNContactListStyle;

__attribute__((visibility("hidden")))
@interface CNContactListStyleApplier : NSObject

{
    id <CNContactListStyle> _contactListStyle;
}

@property (nonatomic, readonly) id <CNContactListStyle> contactListStyle;
@property (nonatomic, readonly) double cellEstimatedHeight;
@property (nonatomic, readonly) unsigned long long tableNoContactsAvailableStyle;

+ (void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;

- (id)initWithContactListStyle:(id)arg1;
- (void)applyContactListStyleToCell:(id)arg1;
- (void)applyContactListStyleToHeaderFooter:(id)arg1;
- (void)applyContactListStyleToNavigationBar:(id)arg1;
- (void)applyContactListStyleToSearchBar:(id)arg1;
- (void)applyContactListStyleToTableView:(id)arg1;
- (void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;
- (void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2;
- (void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2;
- (void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2;
- (void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(_Bool)arg2;
- (void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(_Bool)arg2;

@end
