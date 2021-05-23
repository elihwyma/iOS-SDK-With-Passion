/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, PKPass;

@interface SUScriptPassbookPass : SUScriptObject

{
    PKPass *_pass;
}

@property (readonly) NSString *passTypeIdentifier;
@property (readonly) NSString *passURL;
@property (readonly) NSString *serialNumber;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)initWithPass:(id)arg1;
- (id)scriptAttributeKeys;

@end
