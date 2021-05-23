/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNPropertyGroupItem, NSArray;

@protocol CNPropertyActionDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyAction : CNContactAction

{
    NSArray *_propertyItems;
}

@property (weak, nonatomic) id <CNPropertyActionDelegate> delegate;
@property (copy, nonatomic) NSArray *propertyItems;
@property (nonatomic, readonly) CNPropertyGroupItem *propertyItem;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;

- (id)initWithContact:(id)arg1;
- (_Bool)canPerformAction;
- (void)performActionWithSender:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)presentDisambiguationAlertWithSender:(id)arg1;

@end
