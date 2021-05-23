/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNMutableContact, NSString, UIColor;

@protocol CNContactActionDelegate;

@interface CNContactAction : NSObject

{
    _Bool _destructive;
    _Bool _showBackgroundPlatter;
    _Bool _canPerformAction;
    id <CNContactActionDelegate> _delegate;
    CNContact *_contact;
    NSString *_title;
    id _target;
    SEL _selector;
    UIColor *_color;
    long long _transportType;
}

@property (weak, nonatomic) id <CNContactActionDelegate> delegate;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, getter=isDestructive) _Bool destructive;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long transportType;
@property (nonatomic) _Bool showBackgroundPlatter;
@property (nonatomic, readonly) _Bool canPerformAction;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;

- (id)init;
- (id)description;
- (id)initWithContact:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;

@end
