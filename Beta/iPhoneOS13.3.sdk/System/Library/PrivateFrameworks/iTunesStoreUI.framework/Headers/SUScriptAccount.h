/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SSAccount;

@interface SUScriptAccount : SUScriptObject

{
    SSAccount *_account;
}

@property (retain) SSAccount *account;
@property (copy) NSString *credits;
@property (retain) NSNumber *dsID;
@property (copy) NSString *identifier;
@property (readonly) NSString *ITunesPassSerialNumber;
@property (copy) NSString *kind;
@property (readonly, getter=isPrimaryLockerAccount) id primaryLockerAccount;
@property (retain) id lockerEnabled;
@property (retain) id purchaseHistoryEnabled;
@property (retain) id socialEnabled;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (_Bool)isManagedAppleID;
- (void)setSecureToken:(id)arg1;
- (id)scriptAttributeKeys;
- (void)_commitChanges;
- (void)_setServiceType:(long long)arg1 enabled:(id)arg2;
- (_Bool)isPrimaryAccount;
- (_Bool)isSecureTokenValid;

@end
