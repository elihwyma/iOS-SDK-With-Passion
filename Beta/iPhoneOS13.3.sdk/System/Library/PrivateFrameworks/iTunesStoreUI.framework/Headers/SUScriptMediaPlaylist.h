/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic, readonly) MPMediaPlaylist *nativePlaylist;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1;
+ (id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1;

- (id)_className;
- (id)valueForProperty:(id)arg1;

@end
