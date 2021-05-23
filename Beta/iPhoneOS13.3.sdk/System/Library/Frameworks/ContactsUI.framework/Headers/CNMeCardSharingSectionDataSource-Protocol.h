/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNMeCardSharingSectionDataSource <Swift>

@property (nonatomic, readonly) unsigned long long selectedIndex;

- (unsigned short)numberOfItems;
- (unsigned short)didSelectItemAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsSelection;
- (unsigned short)sectionHeaderLabel;
- (unsigned short)sectionFooterLabel;
- (unsigned short)itemForIndex: /* Error: Ran out of types for this method. */;

@end
