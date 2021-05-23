/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNMeCardSharingRowItem, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingAudienceDataSource : NSObject

{
    _Bool _shouldShowEveryone;
    unsigned long long _selectedSharingAudience;
    CNMeCardSharingRowItem *_selectedItem;
    NSArray *_valuesArray;
    NSArray *_items;
}

@property (nonatomic) _Bool shouldShowEveryone;
@property (retain, nonatomic) NSArray *valuesArray;
@property (retain, nonatomic) CNMeCardSharingRowItem *selectedItem;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long selectedSharingAudience;
@property (nonatomic, readonly) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)reloadItems;
- (_Bool)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;
- (unsigned long long)indexForSharingAudience:(unsigned long long)arg1;
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)arg1;

@end
