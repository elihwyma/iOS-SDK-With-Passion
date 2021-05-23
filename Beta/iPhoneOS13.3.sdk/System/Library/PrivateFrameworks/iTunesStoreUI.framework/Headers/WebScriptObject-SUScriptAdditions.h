/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <WebKit/WebScriptObject.h>

@interface WebScriptObject (SUScriptAdditions)

- (id)safeValueForKey:(id)arg1;
- (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext *)arg1;
- (id)copyJSONDataWithContext:(struct OpaqueJSContext *)arg1;
- (id)copyArrayValueWithValidator:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)copyDate;
- (id)copyValuesForKeys:(id)arg1;
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;

@end
