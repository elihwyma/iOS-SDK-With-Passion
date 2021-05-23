/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@protocol CNUINavigationListItemContent;

@interface CNUINavigationListItem : NSObject

{
    id <CNUINavigationListItemContent> _content;
    CNUINavigationListItem *_parent;
    NSString *_identifier;
    UIImage *_image;
    NSString *_title;
    NSString *_subtitle;
    CNUINavigationListItem *_defaultItem;
    NSArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <CNUINavigationListItemContent> content;
@property (weak, nonatomic) CNUINavigationListItem *parent;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (weak, nonatomic) CNUINavigationListItem *defaultItem;
@property (retain, nonatomic) NSArray *items;

+ (id)itemForActionItem:(id)arg1 isGrouped:(_Bool)arg2;
+ (id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(_Bool)arg2;
+ (id)navigationListItemsForUserActionListModel:(id)arg1;
+ (id)navigationListItemForContactProperty:(id)arg1;

- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end
