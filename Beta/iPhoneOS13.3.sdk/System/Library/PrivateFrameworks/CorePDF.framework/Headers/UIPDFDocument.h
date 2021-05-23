/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSString, UIPDFPageImageCache;

@protocol NSObject><UIPDFDocumentDelegate;

@interface UIPDFDocument : NSObject

{
    struct CGPDFDocument *_cgDocument;
    unsigned long long _numberOfPages;
    double _cachedWidth;
    double _cachedHeight;
    NSString *_documentID;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    unsigned long long _imageCacheCount;
    unsigned long long _imageCacheLookAhead;
    double _imageCacheResolution;
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _imageCacheLock;
    UIPDFPageImageCache *_thumbnailCache;
    struct os_unfair_lock_s _thumbnailLock;
    id <NSObject><UIPDFDocumentDelegate> _delegate;
}

@property (readonly) unsigned long long numberOfPages;
@property (retain) UIPDFPageImageCache *pageImageCache;
@property (retain) UIPDFPageImageCache *thumbnailCache;
@property (readonly) struct CGPDFDocument *CGDocument;
@property (nonatomic) id <NSObject><UIPDFDocumentDelegate> delegate;
@property (readonly) NSString *documentID;

+ (id)documentNamed:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (double)maxWidth;
- (double)maxHeight;
- (id)pageAtIndex:(unsigned long long)arg1;
- (id)initWithCGPDFDocument:(struct CGPDFDocument *)arg1;
- (_Bool)allowsCopying;
- (void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2 withResolution:(double)arg3;
- (id)copyPageAtIndex:(unsigned long long)arg1;
- (struct CGPDFDocument *)copyCGPDFDocument;
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument *)arg1;
- (void)purgePagesBefore:(unsigned long long)arg1;
- (_Bool)copyDocumentTo:(id)arg1;
- (void)updateWidthHeightCache;
- (double)sumWidth;
- (double)sumHeight;

@end
