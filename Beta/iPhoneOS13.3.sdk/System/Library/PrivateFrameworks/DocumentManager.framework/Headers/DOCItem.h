/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class FPItem, FPSandboxingURLWrapper, NSString, NSURL;

@interface DOCItem : NSObject

{
    FPSandboxingURLWrapper *_wrapper;
    _Bool _needsToBeImported;
    NSString *_contentType;
    NSURL *_fileURL;
    NSString *_bookmarkableString;
    FPItem *_fileProviderItem;
}

@property (copy, nonatomic) NSString *contentType;
@property (retain) NSString *bookmarkableString;
@property (retain) FPItem *fileProviderItem;
@property (copy, nonatomic) NSURL *fileURL;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAnyItemAFault:(id)arg1;
+ (id)documentsURLsForItems:(id)arg1;
+ (id)_wrapperForURL:(id)arg1 error:(id *)arg2;
+ (void)_fetchDocumentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isAnyFPItemAFault:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForMode:(unsigned long long)arg1 usingBookmark:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)needsToBeImported;
- (void)copyURLToInbox:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNeedsToBeImported:(_Bool)arg1;
- (id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2;
- (id)initWithURL:(id)arg1 fileProviderItem:(id)arg2;
- (id)coordinatedFileURL;
- (id)fileURLForUploading;

@end
