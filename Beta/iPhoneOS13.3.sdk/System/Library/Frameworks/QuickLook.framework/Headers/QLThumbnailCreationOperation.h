/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSOperation.h>

@class NSError, NSOperationQueue, NSURL, UIImage;

@interface QLThumbnailCreationOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    NSOperationQueue *_operationQueue;
    _Bool _generateIfNeeded;
    UIImage *_image;
    NSError *_error;
    NSURL *_documentURL;
    double _maximumDimension;
    double _scaleFactor;
    unsigned long long _useMode;
    struct CGRect _contentRect;
}

@property struct CGRect contentRect;
@property (retain) UIImage *image;
@property (retain) NSError *error;
@property (retain) NSURL *documentURL;
@property double maximumDimension;
@property double scaleFactor;
@property unsigned long long useMode;
@property _Bool generateIfNeeded;

- (void)start;
- (void)main;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)_finish;
- (_Bool)_finishIfCancelled;
- (void)setExecuting:(_Bool)arg1;
- (void)_finishWithError:(id)arg1;
- (void)retrieveThumbnailForTaggedLogicalURL:(id)arg1;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;

@end
