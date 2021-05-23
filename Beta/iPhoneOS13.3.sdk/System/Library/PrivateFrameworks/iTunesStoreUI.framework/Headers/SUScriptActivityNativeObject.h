/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString;

@interface SUScriptActivityNativeObject : SUScriptNativeObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)destroyNativeObject;
- (void)setupNativeObject;
- (_Bool)activity:(id)arg1 canPerformWithActivityItems:(id)arg2;
- (void)activity:(id)arg1 prepareWithActivityItems:(id)arg2;
- (void)performActionForActivity:(id)arg1;

@end
