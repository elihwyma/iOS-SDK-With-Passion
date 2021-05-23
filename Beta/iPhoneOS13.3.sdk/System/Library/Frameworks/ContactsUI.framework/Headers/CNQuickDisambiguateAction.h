/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNQuickPropertyAction.h>

@class CNQuickAction, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNQuickDisambiguateAction : CNQuickPropertyAction

{
    _Bool _ignoreMainAction;
    NSOrderedSet *_actions;
    CNQuickAction *_mainAction;
}

@property (retain, nonatomic) NSOrderedSet *actions;
@property (weak, nonatomic) CNQuickAction *mainAction;
@property (nonatomic) _Bool ignoreMainAction;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithActions:(id)arg1;
- (id)titleForContext:(long long)arg1;
- (id)subtitleForContext:(long long)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
