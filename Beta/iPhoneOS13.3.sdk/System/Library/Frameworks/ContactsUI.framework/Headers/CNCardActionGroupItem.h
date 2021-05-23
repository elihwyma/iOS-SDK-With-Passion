/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroupItem.h>

@class NSArray, NSMutableArray;

@interface CNCardActionGroupItem : CNCardGroupItem

{
    NSMutableArray *_actions;
}

@property (nonatomic, readonly) NSArray *actions;

+ (id)actionGroupItemWithAction:(id)arg1;
+ (id)actionGroupItemWithActions:(id)arg1;

- (id)init;
- (void)addAction:(id)arg1;
- (id)initWithAction:(id)arg1;
- (Class)cellClass;

@end
