/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewControllerNativeObject.h>

@class NSString;

@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
