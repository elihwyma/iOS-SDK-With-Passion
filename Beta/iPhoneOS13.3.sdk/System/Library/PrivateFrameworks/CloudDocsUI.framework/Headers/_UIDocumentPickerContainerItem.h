/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMapTable, NSOperation, NSString, NSURL, _UIDocumentPickerContainerModel, _UIDocumentPickerURLContainerModel;

@interface _UIDocumentPickerContainerItem : NSObject

{
    _UIDocumentPickerURLContainerModel *_model;
    _UIDocumentPickerURLContainerModel *_weak_model;
    long long _modelDisplayCount;
    id _resourceIdentifier;
    NSOperation *_thumbnailLoadOperation;
    _Bool _hasCachedIsAlias;
    _Bool _cachedIsAlias;
    _Bool _pickable;
    long long _type;
    NSMapTable *_thumbnailsBySize;
    _UIDocumentPickerContainerModel *_parentModel;
    NSString *_pickabilityReason;
}

@property (retain, nonatomic) NSMapTable *thumbnailsBySize;
@property (nonatomic) _Bool pickable;
@property (weak, nonatomic) _UIDocumentPickerContainerModel *parentModel;
@property (copy, nonatomic) NSString *pickabilityReason;
@property (nonatomic, readonly) long long type;
@property (retain, nonatomic, readonly) NSString *title;
@property (retain, nonatomic, readonly) NSString *subtitle;
@property (retain, nonatomic, readonly) NSString *subtitle2;
@property (retain, nonatomic, readonly) NSURL *url;
@property (retain, nonatomic, readonly) NSURL *urlInLocalContainer;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) _Bool renameable;
@property (retain, nonatomic, readonly) _UIDocumentPickerContainerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_lruThumbnailArray;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;
+ (id)_blockingFolderIconForURL:(id)arg1 container:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;
+ (id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(struct CGSize)arg3 scale:(double)arg4 wantsBorder:(_Bool *)arg5 generatedThumbnail:(_Bool *)arg6;
+ (void)clearLRUThumbnailCache;
+ (id)_blockingIconForDocumentProxy:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)_blockingBadgeForContainer:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)_blockingIconForURL:(id)arg1 withSize:(struct CGSize)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)tags;
- (id)contentType;
- (unsigned long long)indentationLevel;
- (id)_resourceIdentifier;
- (void)decrementModelDisplayCount;
- (void)incrementModelDisplayCount;
- (_Bool)isActionApplicableForItem:(long long)arg1;
- (_Bool)isAlias;
- (id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1;
- (void)_modelChanged;
- (id)sortPath;
- (id)_createThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;
- (id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3;
- (void)_ensureModelPresent;
- (void)modelChanged;
- (id)thumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2;

@end
