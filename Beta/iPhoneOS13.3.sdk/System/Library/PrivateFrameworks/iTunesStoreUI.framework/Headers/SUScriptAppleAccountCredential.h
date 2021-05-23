/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject

{
    ACAccountCredential *_credential;
}

@property (readonly) NSString *oauthToken;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithACAccountCredential:(id)arg1;

@end
