/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptAction : SUScriptObject

{
    NSString *_actionType;
}

@property (copy) NSString *actionType;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_className;
- (void)performAction;
- (id)attributeKeys;
- (id)initWithActionType:(id)arg1;
- (id)scriptAttributeKeys;

@end
