/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemFetcher.h>

@class NSItemProvider, NSNumber, NSString;

@protocol QLPreviewItemURLProvider;

__attribute__((visibility("hidden")))
@interface QLItemProviderFetcher : QLItemFetcher

{
    NSItemProvider *_itemProvider;
    NSString *_contentType;
    NSNumber *_fileSize;
    id <QLPreviewItemURLProvider> _urlProvider;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    long long _fileExtensionHandle;
    id _lastContent;
}

@property (retain, nonatomic) id lastContent;
@property (retain) NSItemProvider *itemProvider;
@property (retain) id <QLPreviewItemURLProvider> urlProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemSize;
- (id)shareableItem;
- (_Bool)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchedContent;
- (id)newItemProvider;
- (_Bool)canBeCanceled;
- (void)updatedURLWithProgress:(double)arg1;
- (void)getURLWithDownloadTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg1 URL:(id)arg2;
- (id)initWithContentType:(id)arg1 fileSize:(id)arg2;

@end
