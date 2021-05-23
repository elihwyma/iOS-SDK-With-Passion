/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject

{
    SUScriptMediaItemCollection *_collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
