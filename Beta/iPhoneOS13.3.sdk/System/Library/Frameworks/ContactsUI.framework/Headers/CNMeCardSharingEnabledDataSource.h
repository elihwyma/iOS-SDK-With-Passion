/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UISwitch;

@protocol CNMeCardSharingEnabledDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingEnabledDataSource : NSObject

{
    _Bool _sharingEnabled;
    id <CNMeCardSharingEnabledDelegate> _delegate;
    UISwitch *_enabledSwitch;
    NSArray *_items;
}

@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id <CNMeCardSharingEnabledDelegate> delegate;
@property (nonatomic) _Bool sharingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long selectedIndex;

- (unsigned long long)numberOfItems;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)buildItems;
- (_Bool)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)initWithSharingEnabled:(_Bool)arg1;
- (void)didToggleEnabledSwitch:(id)arg1;

@end
