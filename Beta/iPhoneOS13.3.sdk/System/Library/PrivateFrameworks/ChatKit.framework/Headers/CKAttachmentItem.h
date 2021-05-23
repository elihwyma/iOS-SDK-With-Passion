/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface CKAttachmentItem : NSObject

{
    struct CGSize _size;
    NSURL *_appendedBundleURL;
    _Bool _isSticker;
    _Bool _showDocumentIcon;
    _Bool _isIrisAsset;
    NSURL *_fileURL;
    NSString *_transferGUID;
    NSString *_guid;
    NSDate *_createdDate;
    NSString *_irisVideoPath;
    NSURL *_previewURL;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *transferGUID;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSString *irisVideoPath;
@property (nonatomic) _Bool isIrisAsset;
@property (retain, nonatomic) NSURL *previewURL;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic) _Bool isSticker;
@property (nonatomic) _Bool showDocumentIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

+ (struct CGSize)defaultSize;
+ (id)UTITypes;
+ (id)previewCache;
+ (id)previewSizingQueue;
+ (unsigned long long)pxWidth;

- (_Bool)isEqual:(id)arg1;
- (id)dragItem;
- (id)imageData;
- (id)fileIcon;
- (id)cachedPreview;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)calculateIrisVideoPath;
- (void)startDeferredSetup;
- (id)UTIType;
- (_Bool)canShareItem;
- (id)pasteboardItem;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;
- (void)_savePreview:(id)arg1;
- (id)getIrisVideoPath;
- (id)_getIrisBundleLocation;
- (id)uncachedPreviewURL;
- (id)_getIrisBundleURL;

@end
