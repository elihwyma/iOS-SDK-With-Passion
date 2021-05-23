/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController

@property _Bool allowsPickingMultipleItems;
@property (readonly) NSArray *mediaTypes;
@property (retain) NSString *prompt;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)initWithMediaTypes:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;

@end
