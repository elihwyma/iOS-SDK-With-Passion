/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemFetcher.h>

@class NSData, NSString, NSURL, QLItem;

@interface QLDataFetcher : QLItemFetcher

{
    NSData *_data;
    NSString *_contentType;
    NSString *_previewItemTitle;
    NSURL *_temporaryURL;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemSize;
- (id)shareableItem;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_deleteTempraryFileIfNeeded;
- (void)loadDataIfNeeded;
- (id)_createTemporaryFileIfNeeded;
- (id)_temporaryFilename;
- (id)initWithItem:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewItemTitle:(id)arg3;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (id)fetchedContent;
- (id)newItemProvider;

@end
