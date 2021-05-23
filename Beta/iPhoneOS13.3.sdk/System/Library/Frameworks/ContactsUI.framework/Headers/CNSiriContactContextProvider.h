/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNSiriContactContextProvider : NSObject

{
    _Bool _isEnabled;
    CNContact *_contact;
    CNContactStore *_store;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) _Bool isEnabled;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)allowContextProvider:(id)arg1;
- (id)getCurrentContext;
- (id)initWithContact:(id)arg1 store:(id)arg2;
- (void)_removeContextProviderOnMainThread;
- (id)defaultContextManager;

@end
