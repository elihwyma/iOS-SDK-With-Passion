/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactTargetActionWrapper : NSObject

{
    id _target;
    SEL _action;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;

- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)performActionWithSender:(id)arg1;

@end
