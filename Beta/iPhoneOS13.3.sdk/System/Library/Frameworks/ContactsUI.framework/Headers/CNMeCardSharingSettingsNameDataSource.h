/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingSettingsNameDataSource : NSObject

{
    CNContact *_contact;
    NSArray *_items;
    NSString *_formattedName;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *formattedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long selectedIndex;

- (unsigned long long)numberOfItems;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:(unsigned long long)arg1;

@end
