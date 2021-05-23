/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, PKPassLibrary;

@interface SUScriptPassbookLibrary : SUScriptObject

{
    PKPassLibrary *_passLibrary;
}

@property (readonly) NSArray *passes;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)initWithPassLibrary:(id)arg1;
- (id)scriptAttributeKeys;

@end
