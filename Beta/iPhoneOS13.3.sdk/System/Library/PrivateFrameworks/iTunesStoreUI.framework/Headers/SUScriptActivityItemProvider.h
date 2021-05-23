/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUActivityItemProvider, SUScriptFunction, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject

{
    id _item;
    CDUnknownBlockType _itemBlock;
    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}

@property (readonly) SUActivityItemProvider *nativeActivityItemProvider;
@property (readonly) NSString *activityType;
@property (retain) WebScriptObject *itemFunction;
@property (readonly) NSString *MIMEType;
@property double progress;
@property (copy) NSString *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (void)setItem:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_newPlaceholderWithMIMEType:(id)arg1;
- (void)_finishItemWithItem:(id)arg1;
- (void)_finishPreviewWithImage:(id)arg1;
- (id)activitySupportsMIMEType:(id)arg1;
- (void)setPreviewImageWithURLString:(id)arg1;
- (void)activityItemProvider:(id)arg1 provideItemUsingBlock:(CDUnknownBlockType)arg2;
- (id)initWithMIMEType:(id)arg1;

@end
