/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItemCollection, NSArray, SUScriptMediaItem;

@interface SUScriptMediaItemCollection : SUScriptObject

{
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    _Bool _watchingLibrary;
}

@property (nonatomic, readonly) MPMediaItemCollection *nativeCollection;
@property (readonly) long long count;
@property (readonly) NSArray *items;
@property (readonly) NSArray *mediaTypes;
@property (readonly) SUScriptMediaItem *representativeItem;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)initWithItems:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_libraryChangedNotification:(id)arg1;
- (void)_beginWatchingLibraryIfNecessary;

@end
