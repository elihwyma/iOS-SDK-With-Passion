/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem

{
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    NSURL *_cachedURL;
    NSURL *_cachedURLInLocalContainer;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    NSNumber *_cachedFileObjectID;
    _Bool _cachedRenameable;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)type;
- (id)url;
- (id)tags;
- (id)title;
- (id)contentType;
- (id)modificationDate;
- (id)subtitle;
- (unsigned long long)indentationLevel;
- (id)initWithMetadataItem:(id)arg1;
- (id)subtitle2;
- (_Bool)renameable;
- (id)urlInLocalContainer;
- (void)cacheValues:(id)arg1;
- (void)_removeCachedValues;
- (id)sortPathComponents;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (id)sortPath;

@end
