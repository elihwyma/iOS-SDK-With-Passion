/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSArray, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem

{
    NSURL *_url;
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    _Bool _cachedIsAlias;
    id _generationIdentifier;
}

+ (id)defaultKeys;

- (long long)type;
- (id)initWithURL:(id)arg1;
- (id)url;
- (id)tags;
- (id)title;
- (id)contentType;
- (id)modificationDate;
- (id)subtitle;
- (unsigned long long)indentationLevel;
- (id)subtitle2;
- (_Bool)renameable;
- (_Bool)isAlias;
- (id)urlInLocalContainer;
- (void)_removeCachedValues;
- (id)sortPathComponents;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (id)sortPath;
- (_Bool)attributesModified:(id)arg1;
- (void)cacheValues;

@end
