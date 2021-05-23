/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSString;

@interface SUScriptFacebookFriend : SUScriptObject

{
    NSDictionary *_dictionary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithFriendDictionary:(id)arg1;

@end
