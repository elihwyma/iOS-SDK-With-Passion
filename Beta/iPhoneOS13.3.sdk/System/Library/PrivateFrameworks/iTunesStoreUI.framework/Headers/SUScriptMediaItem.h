/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic, readonly) MPMediaItem *nativeItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1;
+ (unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1;

- (id)_className;
- (id)valueForProperty:(id)arg1;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;

@end
