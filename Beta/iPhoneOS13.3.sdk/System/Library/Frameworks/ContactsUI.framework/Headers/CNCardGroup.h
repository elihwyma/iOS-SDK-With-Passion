/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, NSArray, NSMutableArray, NSString;

@interface CNCardGroup : NSObject <Swift>

{
    NSMutableArray *_items;
    NSMutableArray *_actions;
    NSArray *_actionItems;
    _Bool _useSplitActions;
    _Bool _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSString *_title;
}

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *actionItems;
@property (nonatomic, readonly) NSArray *displayItems;
@property (nonatomic, readonly) NSArray *editingItems;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) _Bool useSplitActions;
@property (nonatomic) _Bool addSpacerFromPreviousGroup;

+ (id)groupForContact:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllActions;
- (id)initWithContact:(id)arg1;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)unwrappedTargetForAction:(id)arg1;
- (SEL)unwrappedSelectorForAction:(id)arg1;
- (void)removeActionWithTitle:(id)arg1;
- (id)_loadActionItems;

@end
