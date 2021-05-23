/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject

{
    _Bool _enabled;
    NSString *_title;
    id _userInfo;
}

@property _Bool enabled;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_sendDidChange;

@end
