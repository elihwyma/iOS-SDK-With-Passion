/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

__attribute__((visibility("hidden")))
@interface CNUIAccountsFacade : NSObject

{
    ACAccountStore *_accountStore;
    CNUIAccountsFacadeRequestRunner *_requestRunner;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) CNUIAccountsFacadeRequestRunner *requestRunner;

- (id)init;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
