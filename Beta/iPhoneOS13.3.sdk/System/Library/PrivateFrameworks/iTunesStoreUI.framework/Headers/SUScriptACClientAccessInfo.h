/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SUScriptAppleAccountType;

@interface SUScriptACClientAccessInfo : SUScriptObject

{
    SUScriptAppleAccountType *_accountType;
    NSMutableDictionary *_dictionary;
}

@property (readonly) NSDictionary *accessInfoDictionary;
@property (retain) SUScriptAppleAccountType *accountType;
@property (readonly) NSString *accessKeyFacebookAppID;
@property (readonly) NSString *accessKeyFacebookPermissions;
@property (readonly) NSString *accessKeyPurposeStatement;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)valueForAccessKey:(id)arg1;
- (void)setValue:(id)arg1 forAccessKey:(id)arg2;

@end
