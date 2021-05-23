/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNQuickAction.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactAction, NSString;

@protocol CNQuickContactActionDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickContactAction : CNQuickAction <Swift>

{
    CNContactAction *_contactAction;
    id <CNQuickContactActionDelegate> _delegate;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) CNContactAction *contactAction;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (weak, nonatomic) id <CNQuickContactActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)actionDidFinish:(id)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContactAction:(id)arg1;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (id)contactViewCache;

@end
