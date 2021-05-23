/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem

{
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

@property (nonatomic, readonly) BRContainer *container;

- (long long)type;
- (id)url;
- (id)title;
- (id)modificationDate;
- (id)subtitle;
- (id)initWithContainer:(id)arg1;
- (void)_modelChanged;
- (id)sortPath;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;

@end
