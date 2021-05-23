/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountCredential, SUScriptAppleAccountType;

@interface SUScriptAppleAccount : SUScriptObject

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

@property (readonly) ACAccount *nativeAccount;
@property (readonly) ACAccountStore *nativeAccountStore;
@property (readonly) NSString *accountDescription;
@property (readonly) SUScriptAppleAccountType *accountType;
@property (readonly) SUScriptAppleAccountCredential *credential;
@property (readonly) NSString *dsID;
@property (readonly) NSString *identifier;
@property (readonly) NSString *username;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)reload;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithACAccount:(id)arg1 accountStore:(id)arg2;
- (void)setAgeVerificationExpirationDate:(id)arg1 completionHandler:(id)arg2;

@end
